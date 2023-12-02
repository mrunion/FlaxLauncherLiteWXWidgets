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
    virtual void SetEngineName(wxString engineName);
    virtual wxString GetEngineName();
    
    virtual bool TransferDataFromWindow();

private:
    wxString m_engineNameData = wxEmptyString;
    wxString m_projectNameData = wxEmptyString;
    wxString m_projectPathData = wxEmptyString;
};
#endif // FLAXPROJECTDLG_HPP
