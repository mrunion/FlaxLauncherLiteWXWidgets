#ifndef FLAXENGINEDLG_HPP
#define FLAXENGINEDLG_HPP
#include "wxcrafter.hpp"

class FlaxEngineDlg : public FlaxEngineDlgBaseClass
{
public:
    FlaxEngineDlg(wxWindow* parent);
    virtual ~FlaxEngineDlg();
    
    // Property accessors
    void SetEngineName(wxString engineName) {
        m_engineName = engineName;
    }
    
    wxString GetEngineName() {
        return m_engineName;
    }
    
    void SetEnginePath(wxString enginePath) {
        m_enginePath = enginePath;
    }
    
    wxString GetEnginePath() {
        return m_enginePath;
    }

private:
    wxString m_engineName = wxT("");
    wxString m_enginePath = wxT("");
};
#endif // FLAXENGINEDLG_HPP
