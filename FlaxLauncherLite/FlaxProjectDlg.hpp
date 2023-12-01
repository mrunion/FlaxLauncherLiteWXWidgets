#ifndef FLAXPROJECTDLG_HPP
#define FLAXPROJECTDLG_HPP
#include "wxcrafter.hpp"

class FlaxProjectDlg : public FlaxProjectDlgBaseClass
{
public:
    FlaxProjectDlg(wxWindow* parent);
    virtual ~FlaxProjectDlg();
    
    // Property accessors
    void SetProjectName(wxString projectName) {
        m_projectName = projectName;
    }
    
    wxString GetProjectName() {
        return m_projectName;
    }
    
    void SetProjectPath(wxString projectPath) {
        m_projectPath = projectPath;
    }
    
    wxString GetProjectPath() {
        return m_projectPath;
    }

private:
    wxString m_projectName = wxT("");
    wxString m_projectPath = wxT("");
};
#endif // FLAXPROJECTDLG_HPP
