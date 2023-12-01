#ifndef FLAXENGINEDLG_HPP
#define FLAXENGINEDLG_HPP
#include "wxcrafter.hpp"

class FlaxEngineDlg : public FlaxEngineDlgBaseClass
{
public:
    FlaxEngineDlg(wxWindow* parent);
    virtual ~FlaxEngineDlg();
    
    // Property accessors
    virtual void SetEngineName(wxString engineName);
    virtual wxString GetEngineName();
    virtual void SetEnginePath(wxString enginePath);
    virtual wxString GetEnginePath();
    
    virtual bool TransferDataFromWindow();

private:
    wxString m_engineNameData = wxEmptyString;
    wxString m_enginePathData = wxEmptyString;
};
#endif // FLAXENGINEDLG_HPP
