#include "FlaxProjectDlg.hpp"
#include <wx/valtext.h>
#include <wx/valgen.h>

FlaxProjectDlg::FlaxProjectDlg(wxWindow* parent)
    : FlaxProjectDlgBaseClass(parent) {
    SetValidators();
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

void FlaxProjectDlg::SetValidators() {
    // Set up the validators for this dialog
    m_projectName->SetValidator(wxGenericValidator(& m_projectNameData));
}

