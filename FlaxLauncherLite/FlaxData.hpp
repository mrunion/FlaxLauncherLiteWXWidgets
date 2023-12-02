#include <wx/wx.h>

struct FlaxEngineDefinition {
    wxString engineName;
    wxString enginePath;
};

struct FlaxProjectDefinition {
    wxString projectName;
    wxString projectPath;
    wxString engineName;
};