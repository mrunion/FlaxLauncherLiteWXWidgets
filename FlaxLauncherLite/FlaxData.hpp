#include <wx/wx.h>

struct FlaxEngineDefinition {
    wxString engineName;
    wxString enginePath;
};

struct FlacProjectDefinition {
    wxString projectName;
    wxString projectPath;
    wxString engineName;
};