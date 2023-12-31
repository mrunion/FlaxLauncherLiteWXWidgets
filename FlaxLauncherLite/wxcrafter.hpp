//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _FLAXLAUNCHERLITE_FLAXLAUNCHERLITE_WXCRAFTER_BASE_CLASSES_HPP
#define _FLAXLAUNCHERLITE_FLAXLAUNCHERLITE_WXCRAFTER_BASE_CLASSES_HPP

// clang-format off
#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/frame.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/listctrl.h>
#include <wx/statusbr.h>
#include <wx/dialog.h>
#include <wx/textctrl.h>
#include <wx/filepicker.h>
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif

// clang-format on

class MainFrameBaseClass : public wxFrame
{
protected:
    wxMenuBar* m_menuBar31;
    wxMenu* m_menu78;
    wxMenuItem* m_menuItemAbout;
    wxMenuItem* m_menuItemExit;
    wxPanel* m_mainPanel;
    wxStaticBitmap* m_staticBitmap44;
    wxStaticText* m_projects;
    wxStaticText* m_engines;
    wxPanel* m_projectPanel;
    wxStaticText* m_newProject;
    wxStaticText* m_addProject;
    wxListCtrl* m_projectsListCtl;
    wxPanel* m_enginePanel;
    wxStaticText* m_addEngine;
    wxListCtrl* m_enginesListCtl;
    wxStatusBar* m_statusBar32;

protected:
    virtual void OnAbout(wxCommandEvent& event) { event.Skip(); }
    virtual void OnExit(wxCommandEvent& event) { event.Skip(); }
    virtual void OnProjectsLeftUp(wxMouseEvent& event) { event.Skip(); }
    virtual void OnEnginesLeftUp(wxMouseEvent& event) { event.Skip(); }
    virtual void OnCreateProjectLeftUp(wxMouseEvent& event) { event.Skip(); }
    virtual void OnAddProjectLeftUp(wxMouseEvent& event) { event.Skip(); }
    virtual void OnProjectListCtrlContextMenuShow(wxContextMenuEvent& event) { event.Skip(); }
    virtual void OnAddEngineLeftUp(wxMouseEvent& event) { event.Skip(); }
    virtual void OnEngineListCtrlContextMenuShow(wxContextMenuEvent& event) { event.Skip(); }

public:
    wxMenuBar* GetMenuBar31() { return m_menuBar31; }
    wxStaticBitmap* GetStaticBitmap44() { return m_staticBitmap44; }
    wxStaticText* GetProjects() { return m_projects; }
    wxStaticText* GetEngines() { return m_engines; }
    wxPanel* GetMainPanel() { return m_mainPanel; }
    wxStaticText* GetNewProject() { return m_newProject; }
    wxStaticText* GetAddProject() { return m_addProject; }
    wxListCtrl* GetProjectsListCtl() { return m_projectsListCtl; }
    wxPanel* GetProjectPanel() { return m_projectPanel; }
    wxStaticText* GetAddEngine() { return m_addEngine; }
    wxListCtrl* GetEnginesListCtl() { return m_enginesListCtl; }
    wxPanel* GetEnginePanel() { return m_enginePanel; }
    wxStatusBar* GetStatusBar32() { return m_statusBar32; }
    MainFrameBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Flax Launcher Lite"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(600,350), long style = wxDEFAULT_FRAME_STYLE);
    virtual ~MainFrameBaseClass();
};


class FlaxEngineDlgBaseClass : public wxDialog
{
protected:
    wxStaticText* m_staticText60;
    wxTextCtrl* m_engineName;
    wxStaticText* m_staticText62;
    wxFilePickerCtrl* m_enginePath;
    wxStdDialogButtonSizer* m_stdBtnSizer64;
    wxButton* m_OKBtn;
    wxButton* m_CancelBtn;

protected:

public:
    wxStaticText* GetStaticText60() { return m_staticText60; }
    wxTextCtrl* GetEngineName() { return m_engineName; }
    wxStaticText* GetStaticText62() { return m_staticText62; }
    wxFilePickerCtrl* GetEnginePath() { return m_enginePath; }
    FlaxEngineDlgBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Flax Engine"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(450,200), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~FlaxEngineDlgBaseClass();
};


class FlaxProjectDlgBaseClass : public wxDialog
{
protected:
    wxStaticText* m_staticText81;
    wxChoice* m_engineChoiceCtl;
    wxStaticText* m_staticText603;
    wxTextCtrl* m_projectName;
    wxStaticText* m_projectPathCtlLabel;
    wxDirPickerCtrl* m_projectPathCtl;
    wxStaticText* m_projectFileCtlLabel;
    wxFilePickerCtrl* m_projectFileCtl;
    wxStdDialogButtonSizer* m_stdBtnSizer647;
    wxButton* m_OKBtn;
    wxButton* m_CancelBtn;

protected:

public:
    wxStaticText* GetStaticText81() { return m_staticText81; }
    wxChoice* GetEngineChoiceCtl() { return m_engineChoiceCtl; }
    wxStaticText* GetStaticText603() { return m_staticText603; }
    wxTextCtrl* GetProjectName() { return m_projectName; }
    wxStaticText* GetProjectPathCtlLabel() { return m_projectPathCtlLabel; }
    wxDirPickerCtrl* GetProjectPathCtl() { return m_projectPathCtl; }
    wxStaticText* GetProjectFileCtlLabel() { return m_projectFileCtlLabel; }
    wxFilePickerCtrl* GetProjectFileCtl() { return m_projectFileCtl; }
    FlaxProjectDlgBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Flax Project"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(450,250), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~FlaxProjectDlgBaseClass();
};

#endif
