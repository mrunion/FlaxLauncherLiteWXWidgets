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
#include <wx/statusbr.h>
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
    wxPanel* m_mainPanel;
    wxStaticBitmap* m_staticBitmap44;
    wxStaticText* m_projects;
    wxStaticText* m_engines;
    wxPanel* m_projectPanel;
    wxStaticText* m_newProject;
    wxStaticText* m_addProject;
    wxPanel* m_enginePanel;
    wxStaticText* m_newEngine;
    wxStaticText* m_addEngine;
    wxStatusBar* m_statusBar32;

protected:
    virtual void OnProjectsLeftUp(wxMouseEvent& event) { event.Skip(); }
    virtual void OnEnginesLeftUp(wxMouseEvent& event) { event.Skip(); }
    virtual void OnCreateProjectLeftUp(wxMouseEvent& event) { event.Skip(); }
    virtual void OnAddProjectLeftUp(wxMouseEvent& event) { event.Skip(); }
    virtual void OnCreateEngineLeftUp(wxMouseEvent& event) { event.Skip(); }
    virtual void OnAddEngineLeftUp(wxMouseEvent& event) { event.Skip(); }

public:
    wxMenuBar* GetMenuBar31() { return m_menuBar31; }
    wxStaticBitmap* GetStaticBitmap44() { return m_staticBitmap44; }
    wxStaticText* GetProjects() { return m_projects; }
    wxStaticText* GetEngines() { return m_engines; }
    wxPanel* GetMainPanel() { return m_mainPanel; }
    wxStaticText* GetNewProject() { return m_newProject; }
    wxStaticText* GetAddProject() { return m_addProject; }
    wxPanel* GetProjectPanel() { return m_projectPanel; }
    wxStaticText* GetNewEngine() { return m_newEngine; }
    wxStaticText* GetAddEngine() { return m_addEngine; }
    wxPanel* GetEnginePanel() { return m_enginePanel; }
    wxStatusBar* GetStatusBar32() { return m_statusBar32; }
    MainFrameBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Flax Launcher Lite"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(600,350), long style = wxDEFAULT_FRAME_STYLE);
    virtual ~MainFrameBaseClass();
};

#endif