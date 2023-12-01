#include "FlaxProjectDlg.hpp"
#include <wx/valtext.h>
#include <wx/valgen.h>

FlaxProjectDlg::FlaxProjectDlg(wxWindow* parent)
    : FlaxProjectDlgBaseClass(parent)
{
    SetValidators();
}

FlaxProjectDlg::~FlaxProjectDlg()
{
}

void FlaxProjectDlg::SetValidators() {
    // Set up the validators for this dialog
    m_projectName->SetValidator(wxGenericValidator(& m_projectNameData));
}

