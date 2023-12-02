#include "FlaxProjectDlg.hpp"
#include <wx/valtext.h>
#include <wx/valgen.h>

FlaxProjectDlg::FlaxProjectDlg(wxWindow* parent)
    : FlaxProjectDlgBaseClass(parent) {
}

FlaxProjectDlg::~FlaxProjectDlg() {
}

// Property accessors
void FlaxProjectDlg::SetProjectName(wxString projectName) {
    m_projectNameData = projectName;
}

wxString FlaxProjectDlg::GetProjectName() {
    return m_projectNameData;
}

void FlaxProjectDlg::SetProjectPath(wxString projectPath) {
    m_projectPathData = projectPath;
}

wxString FlaxProjectDlg::GetProjectPath() {
    return m_projectPathData;
}

void FlaxProjectDlg::SetEngineName(wxString engineName) {
    m_engineNameData = engineName;
}

wxString FlaxProjectDlg::GetEngineName() {
    return m_engineNameData;
}

bool FlaxProjectDlg::TransferDataFromWindow() {
    m_engineNameData = m_engineChoiceCtl->GetStringSelection();
    m_projectNameData = m_projectName->GetValue();
    m_projectPathData = m_projectPathCtl->GetTextCtrlValue();
    
    return true;
}

