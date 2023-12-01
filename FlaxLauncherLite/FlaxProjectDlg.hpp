#ifndef FLAXPROJECTDLG_HPP
#define FLAXPROJECTDLG_HPP
#include "wxcrafter.hpp"

class FlaxProjectDlg : public FlaxProjectDlgBaseClass
{
public:
    FlaxProjectDlg(wxWindow* parent);
    virtual ~FlaxProjectDlg();
    
    // Property accessors
    virtual void SetProjectName(wxString projectName);
    virtual wxString GetProjectName();
    virtual void SetProjectPath(wxString projectPath);
    virtual wxString GetProjectPath();

protected:
    virtual void SetValidators();

private:
    wxString m_projectNameData = wxEmptyString;
    wxString m_projectPathData = wxEmptyString;
};
#endif // FLAXPROJECTDLG_HPP
