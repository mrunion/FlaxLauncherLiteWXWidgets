#include "MainFrame.hpp"
#include <wx/aboutdlg.h>
#include <wx/msgdlg.h>

MainFrame::MainFrame(wxWindow* parent)
    : MainFrameBaseClass(parent)
{
}

MainFrame::~MainFrame()
{
}

void MainFrame::OnAbout(wxCommandEvent& event)
{
    wxUnusedVar(event);
    wxAboutDialogInfo info;
    info.SetCopyright(_("Flax Launcher Lite"));
    info.SetLicence(_("GPL v2 or later"));
    info.SetDescription(_("A lightweight launcher for the Flax game engine"));
    ::wxAboutBox(info);
}

void MainFrame::OnExit(wxCommandEvent& event)
{
    wxUnusedVar(event);
    Close();
}
void MainFrame::OnLeftUp(wxMouseEvent& event)
{
}
void MainFrame::OnProjectsLeftUp(wxMouseEvent& event)
{
    // Show the Projects panel and hide the Egnines panel
    m_projectPanel->Show(true);
    m_enginePanel->Show(false);
    GetSizer()->Layout();
}
void MainFrame::OnEnginesLeftUp(wxMouseEvent& event)
{
    // Show the Engines panel and hide the Projects panel
    m_enginePanel->Show(true);
    m_projectPanel->Show(false);
    GetSizer()->Layout();
}
void MainFrame::OnAddEngineLeftUp(wxMouseEvent& event)
{
}
void MainFrame::OnAddProjectLeftUp(wxMouseEvent& event)
{
}
void MainFrame::OnCreateEngineLeftUp(wxMouseEvent& event)
{
}
void MainFrame::OnCreateProjectLeftUp(wxMouseEvent& event)
{
}
