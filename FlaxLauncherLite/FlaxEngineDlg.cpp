#include "FlaxEngineDlg.hpp"
#include <wx/valtext.h>
#include <wx/valgen.h>

FlaxEngineDlg::FlaxEngineDlg(wxWindow* parent)
    : FlaxEngineDlgBaseClass(parent) {
}

FlaxEngineDlg::~FlaxEngineDlg() {
}

// Property accessors
void FlaxEngineDlg::SetEngineName(wxString engineName) {
    m_engineNameData = engineName;
}

wxString FlaxEngineDlg::GetEngineName() {
    return m_engineNameData;
}

void FlaxEngineDlg::SetEnginePath(wxString enginePath) {
    m_enginePathData = enginePath;
}

wxString FlaxEngineDlg::GetEnginePath() {
    return m_enginePathData;
}

bool FlaxEngineDlg::TransferDataFromWindow() {
    m_engineNameData = m_engineName->GetValue();
    m_enginePathData = m_enginePath->GetTextCtrlValue();
    
    return true;
}