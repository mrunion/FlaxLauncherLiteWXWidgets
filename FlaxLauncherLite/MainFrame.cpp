#include "MainFrame.hpp"
#include "FlaxEngineDlg.hpp"
#include "FlaxProjectDlg.hpp"
#include <wx/aboutdlg.h>
#include <wx/msgdlg.h>
#include <wx/config.h>
#include <wx/confbase.h>

MainFrame::MainFrame(wxWindow* parent)
    : MainFrameBaseClass(parent) {
    SetupConfig();
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
        // Add Engine
        FlaxEngineDefinition ed = { dialog.GetEngineName(), dialog.GetEnginePath() };
        m_engineList.push_back(ed);
        
        m_appConfig->SetPath("/engines");
        m_appConfig->Write(ed.engineName, ed.enginePath);
        m_appConfig->Flush();
        m_appConfig->SetPath("/");
    }
}

void MainFrame::OnAddProjectLeftUp(wxMouseEvent& event) {
}

void MainFrame::OnCreateProjectLeftUp(wxMouseEvent& event) {
    FlaxProjectDlg dialog(this);
    
    if (dialog.ShowModal() == wxID_OK) {
        wxMessageBox(dialog.GetProjectName(), "MR_DEBUG");
    }
}
