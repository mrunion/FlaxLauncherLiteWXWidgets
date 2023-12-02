#include "MainFrame.hpp"
#include "FlaxEngineDlg.hpp"
#include "FlaxProjectDlg.hpp"
#include <wx/aboutdlg.h>
#include <wx/msgdlg.h>
#include <wx/config.h>
#include <wx/confbase.h>
#include <wx/listctrl.h>
#include <wx/gdicmn.h>

MainFrame::MainFrame(wxWindow* parent)
    : MainFrameBaseClass(parent) {
    SetupConfig();
    SetupImageLists();
    FillProjectListCtl();
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
    m_projectImageList = new wxImageList(32, 32);
    
    wxBitmap bitmap(wxT("fll"), wxBITMAP_TYPE_PNG_RESOURCE);
    m_projectImageList->Add(bitmap);
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