#include "MainFrame.hpp"
#include "FlaxEngineDlg.hpp"
#include "FlaxProjectDlg.hpp"
#include <wx/aboutdlg.h>
#include <wx/msgdlg.h>
#include <wx/config.h>
#include <wx/confbase.h>
#include <wx/listctrl.h>
#include <wx/gdicmn.h>
#include <wx/menu.h>

MainFrame::MainFrame(wxWindow* parent)
    : MainFrameBaseClass(parent) {
    // Bind the context menu handler here
    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnContextMenuSelected, this, MENU_ID_LAUNCH, MENU_ID_ENGINE_DELETE);
    
    SetupConfig();
    SetupImageLists();
    FillProjectListCtl();
    FillEngineListCtl();
}

MainFrame::~MainFrame() {
}

void MainFrame::SetupConfig() {
    m_appConfig = wxConfig::Get();
    
    // Read the engines that are stored
    m_appConfig->SetPath("/engines");
    
    wxString str;
    long dummy;
    bool validItem = m_appConfig->GetFirstEntry(str, dummy);
    while (validItem) {
        FlaxEngineDefinition item = { str, m_appConfig->Read(str, "")};
        m_engineList.push_back(item);
        validItem = m_appConfig->GetNextEntry(str, dummy);
    }
    
    // Read the projects that are stored
    m_appConfig->SetPath("/projects");
    validItem = m_appConfig->GetFirstGroup(str, dummy);
    while (validItem) {
        // Each group is a project, and there are fields underneath we need
        FlaxProjectDefinition item = {
            str,
            m_appConfig->Read(str+"/path", "<Unknown>"),
            m_appConfig->Read(str+"/engine", "<Unknown>")
        };
        m_projectList.push_back(item);
        validItem = m_appConfig->GetNextGroup(str, dummy);
    }
    
    // Set the path back to the root
    m_appConfig->SetPath("/");
}

void MainFrame::OnAbout(wxCommandEvent& event) {
    wxUnusedVar(event);
    wxAboutDialogInfo info;
    info.SetCopyright(_("Flax Launcher Lite"));
    info.SetLicence(_("MIT"));
    info.SetDescription(_("A lightweight launcher for the Flax game engine"));
    ::wxAboutBox(info);
}

void MainFrame::OnExit(wxCommandEvent& event) {
    wxUnusedVar(event);
    Close();
}
 
void MainFrame::OnProjectsLeftUp(wxMouseEvent& event) {
    // Show the Projects panel and hide the Egnines panel
    m_projectPanel->Show(true);
    m_enginePanel->Show(false);
    GetSizer()->Layout();
}

void MainFrame::OnEnginesLeftUp(wxMouseEvent& event) {
    // Show the Engines panel and hide the Projects panel
    m_enginePanel->Show(true);
    m_projectPanel->Show(false);
    GetSizer()->Layout();
}

void MainFrame::OnAddEngineLeftUp(wxMouseEvent& event) {
    FlaxEngineDlg dialog(this);
    
    if (dialog.ShowModal() == wxID_OK) {
        WriteEngineConfig(dialog.GetEngineName(), dialog.GetEnginePath());
        FillEngineListCtl();
    }
}

void MainFrame::OnAddProjectLeftUp(wxMouseEvent& event) {
    FlaxProjectDlg dialog(this);
    
    // Since we are adding a project, hide the path chooser and show the file chooser
    dialog.GetProjectFileCtlLabel()->Show(true);
    dialog.GetProjectFileCtl()->Show(true);
    dialog.GetProjectPathCtlLabel()->Hide();
    dialog.GetProjectPathCtl()->Hide();
    
    // Add the list of engines to the engine choices
    dialog.GetEngineChoiceCtl()->Clear();
    for (FlaxEngineDefinition ed : m_engineList) {
        dialog.GetEngineChoiceCtl()->Append(ed.engineName);
    }
    
    if (dialog.ShowModal() == wxID_OK) {
        WriteProjectConfig(dialog.GetProjectName(), dialog.GetProjectPath(), dialog.GetEngineName());
        FillProjectListCtl();
    }
}

void MainFrame::OnCreateProjectLeftUp(wxMouseEvent& event) {
    FlaxProjectDlg dialog(this);
    
    // Since we are creating a project, hide the file chooser and show the path chooser
    dialog.GetProjectFileCtlLabel()->Hide();
    dialog.GetProjectFileCtl()->Hide();
    dialog.GetProjectPathCtlLabel()->Show(true);
    dialog.GetProjectPathCtl()->Show(true);
    
    if (dialog.ShowModal() == wxID_OK) {
        wxMessageBox(dialog.GetProjectName(), "MR_DEBUG");
    }
}

void MainFrame::WriteEngineConfig(wxString engineName, wxString enginePath) {
    // Add Engine
    FlaxEngineDefinition ed = { engineName, enginePath };
    m_engineList.push_back(ed);
    
    m_appConfig->SetPath("/engines");
    m_appConfig->Write(ed.engineName, ed.enginePath);
    m_appConfig->Flush();
    m_appConfig->SetPath("/");
}

void MainFrame::WriteProjectConfig(wxString projectName, wxString projectPath, wxString engineName) {
    // Add Project
    FlaxProjectDefinition pd = { projectName, projectPath, engineName };
    m_projectList.push_back(pd);
    
    m_appConfig->SetPath("/projects/" + pd.projectName);
    m_appConfig->Write("path", pd.projectPath);
    m_appConfig->Write("engine", pd.engineName);
    m_appConfig->Flush();
    m_appConfig->SetPath("/");
}

void MainFrame::SetupImageLists() {
    m_engineImageList = new wxImageList(32, 32);
    m_projectImageList = new wxImageList(32, 32);
    
    wxBitmap projectBitmap(wxT("project_32x32"), wxBITMAP_TYPE_PNG_RESOURCE);
    wxBitmap engineBitmap(wxT("engine_32x32"), wxBITMAP_TYPE_PNG_RESOURCE);
    
    m_projectImageList->Add(projectBitmap);
    m_engineImageList->Add(engineBitmap);
}

void MainFrame::FillProjectListCtl() {
    m_projectsListCtl->ClearAll();
    m_projectsListCtl->SetImageList(m_projectImageList, wxIMAGE_LIST_NORMAL);
    
    int counter = 0;
    for (FlaxProjectDefinition pd : m_projectList) {
        wxListItem li = *new wxListItem();
        li.SetId(counter++);
        li.SetText(pd.projectName);
        li.SetImage(0);
        
        m_projectsListCtl->InsertItem(li);
    }
}

void MainFrame::FillEngineListCtl() {
    m_enginesListCtl->ClearAll();
    m_enginesListCtl->SetImageList(m_engineImageList, wxIMAGE_LIST_NORMAL);
    
    int counter = 0;
    for (FlaxEngineDefinition ed : m_engineList) {
        wxListItem li = *new wxListItem();
        li.SetId(counter++);
        li.SetText(ed.engineName);
        li.SetImage(0);
        
        m_enginesListCtl->InsertItem(li);
    }
}

FlaxEngineDefinition MainFrame::FindEngineDefinition(wxString engineName) {
    // Look up the info for the engine given the name
    for (FlaxEngineDefinition ed : m_engineList) {
        if (ed.engineName.IsSameAs(engineName)) {
            return ed;
        }
    }
    
    // No engine with that name found
    return { wxT("<UNKNOWN>"), wxT("") };
}

FlaxProjectDefinition MainFrame::FindProjectDefinition(wxString projectName) {
    // Look up the info for the project given the name
    for (FlaxProjectDefinition pd : m_projectList) {
        if (pd.projectName.IsSameAs(projectName)) {
            return pd;
        }
    }
    
    // No engine with that name found
    return { wxT("<UNKNOWN>"), wxT(""), wxT("<UNKNNOWN>") };
}

bool MainFrame::DeleteEngine(wxString engineName) {
    // Delete the given engine
    m_appConfig->SetPath("/engines");
    auto result = m_appConfig->DeleteEntry(engineName);
    m_appConfig->SetPath("/");
    m_appConfig->Flush();
    
    return result;
}

bool MainFrame::DeleteProject(wxString projectName) {
    // Delete the given project
    m_appConfig->SetPath("/projects");
    auto result = m_appConfig->DeleteGroup(projectName);
    m_appConfig->SetPath("/");
    m_appConfig->Flush();
    
    return result;
}

void MainFrame::OnContextMenuSelected(wxCommandEvent& event) {
    // See whitch menu item was clicked
    switch(event.GetId()) {
        case MENU_ID_LAUNCH: {
            wxMessageBox(wxT("Launch"), wxT("MR_DEBUG"));
            break;
        }
        
        case MENU_ID_PROJECT_DELETE: {
            long projectPos = m_projectsListCtl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
            FlaxProjectDefinition pd = m_projectList.at(projectPos);
            
            if (DeleteProject(pd.projectName)) {
                // We successfully deleted the project from disk, so remove it from the list
                m_projectList.erase(m_projectList.begin() + projectPos);
                FillProjectListCtl();
            } else {
                wxMessageBox(wxT("Could not delete Project"), wxT("Delete Project"));
            }
            
            break;
        }
        
        case MENU_ID_ENGINE_DELETE: {
            long enginePos = m_enginesListCtl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
            FlaxEngineDefinition ed = m_engineList.at(enginePos);
            
            if (DeleteEngine(ed.engineName)) {
                // We successfully deleted the engine from disk, so remove it from the list
                m_engineList.erase(m_engineList.begin() + enginePos);
                FillEngineListCtl();
            } else {
                wxMessageBox(wxT("Could not delete Engine"), wxT("Delete Engine"));
            }
            
            break;
        }
    }
}

void MainFrame::OnEngineListCtrlContextMenuShow(wxContextMenuEvent& event) {
    // See if anything is selected, and if so we show a menu
    long selectedItem = m_enginesListCtl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    
    if (selectedItem >= 0) {
        // Show a popup menu with the appropriate options
        wxMenu popupMenu;
        popupMenu.Append(MENU_ID_ENGINE_DELETE, wxT("Delete"));
        PopupMenu(&popupMenu);
    }
}

void MainFrame::OnProjectListCtrlContextMenuShow(wxContextMenuEvent& event) {
    // See if anything is selected, and if so we show a menu
    long selectedItem = m_projectsListCtl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    
    if (selectedItem >= 0) {
        // Show a popup menu with the appropriate options
        wxMenu popupMenu;
        popupMenu.Append(MENU_ID_LAUNCH, wxT("Launch"));
        popupMenu.Append(MENU_ID_PROJECT_DELETE, wxT("Delete"));
        PopupMenu(&popupMenu);
    }
}
