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
    virtual void OnAddEngineLeftUp(wxMouseEvent& event);
    virtual void OnAddProjectLeftUp(wxMouseEvent& event);
    virtual void OnCreateProjectLeftUp(wxMouseEvent& event);
    virtual void OnEnginesLeftUp(wxMouseEvent& event);
    virtual void OnProjectsLeftUp(wxMouseEvent& event);
    virtual void OnAbout(wxCommandEvent& event);
    virtual void OnExit(wxCommandEvent& event);
    
    virtual void SetupConfig();
    //virtual void WriteEngineConfig(wxString engineName, wxString enginePath);
    //virtual void WriteProjectConfig(wxString projectName, wxString projectPath, wxString engineName);

private:
    wxConfigBase *m_appConfig;
    std::vector<FlaxEngineDefinition> m_engineList;
};
#endif // MAINFRAME_HPP
