#ifndef MAINFRAME_HPP
#define MAINFRAME_HPP
#include "wxcrafter.hpp"
#include "FlaxData.hpp"
#include <wx/config.h>

class MainFrame : public MainFrameBaseClass {
public:
    MainFrame(wxWindow* parent);
    virtual ~MainFrame();
    
protected:
    virtual void OnProjectListCtrlContextMenuShow(wxContextMenuEvent& event);
    virtual void OnEngineListCtrlContextMenuShow(wxContextMenuEvent& event);
    virtual void OnContextMenuSelected(wxCommandEvent& event);
    virtual void OnAddEngineLeftUp(wxMouseEvent& event);
    virtual void OnAddProjectLeftUp(wxMouseEvent& event);
    virtual void OnCreateProjectLeftUp(wxMouseEvent& event);
    virtual void OnEnginesLeftUp(wxMouseEvent& event);
    virtual void OnProjectsLeftUp(wxMouseEvent& event);
    virtual void OnAbout(wxCommandEvent& event);
    virtual void OnExit(wxCommandEvent& event);
    
    virtual void SetupConfig();
    virtual void SetupImageLists();
    virtual void FillProjectListCtl();
    virtual void FillEngineListCtl();
    virtual void WriteEngineConfig(wxString engineName, wxString enginePath);
    virtual void WriteProjectConfig(wxString projectName, wxString projectPath, wxString engineName);

private:
    wxConfigBase *m_appConfig;
    std::vector<FlaxEngineDefinition> m_engineList;
    std::vector<FlaxProjectDefinition> m_projectList;
    wxImageList *m_projectImageList;
    wxImageList *m_engineImageList;
    
    enum m_popupMenuIDs { MENU_ID_LAUNCH = wxID_HIGHEST + 1, MENU_ID_PROJECT_DELETE, MENU_ID_ENGINE_DELETE };
    
    FlaxEngineDefinition FindEngineDefinition(wxString engineName);
    FlaxProjectDefinition FindProjectDefinition(wxString projectName);
    bool DeleteEngine(wxString engineName);
    bool DeleteProject(wxString projectName);
};
#endif // MAINFRAME_HPP
