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
        m_projectNameData = projectName;
    }
    
    wxString GetProjectName() {
        return m_projectNameData;
    }
    
    void SetProjectPath(wxString projectPath) {
        m_projectPathData = projectPath;
    }
    
    wxString GetProjectPath() {
        return m_projectPathData;
    }

protected:
    void SetValidators();

private:
    wxString m_projectNameData = wxEmptyString;
    wxString m_projectPathData = wxEmptyString;
};
#endif // FLAXPROJECTDLG_HPP
