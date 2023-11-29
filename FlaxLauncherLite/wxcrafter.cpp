//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter.hpp"


// Declare the bitmap loading function
extern void wxC9ED9InitBitmapResources();


namespace {
// return the wxBORDER_SIMPLE that matches the current application theme
wxBorder get_border_simple_theme_aware_bit() {
#if wxVERSION_NUMBER >= 3300 && defined(__WXMSW__)
    return wxSystemSettings::GetAppearance().IsDark() ? wxBORDER_SIMPLE : wxBORDER_STATIC;
#else
    return wxBORDER_DEFAULT;
#endif
} // DoGetBorderSimpleBit
bool bBitmapLoaded = false;
} // namespace


MainFrameBaseClass::MainFrameBaseClass(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxFrame(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    m_menuBar31 = new wxMenuBar(0);
    this->SetMenuBar(m_menuBar31);
    
    wxFlexGridSizer* flexGridSizer30 = new wxFlexGridSizer(0, 2, 0, 5);
    flexGridSizer30->SetFlexibleDirection( wxBOTH );
    flexGridSizer30->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer30->AddGrowableCol(1);
    this->SetSizer(flexGridSizer30);
    
    m_mainPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(130,-1)), wxTAB_TRAVERSAL);
    
    flexGridSizer30->Add(m_mainPanel, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizer37 = new wxBoxSizer(wxVERTICAL);
    m_mainPanel->SetSizer(boxSizer37);
    
    m_staticBitmap44 = new wxStaticBitmap(m_mainPanel, wxID_ANY, wxXmlResource::Get()->LoadBitmap(wxT("Logo")), wxDefaultPosition, wxDLG_UNIT(m_mainPanel, wxSize(64,64)), 0 );
    
    boxSizer37->Add(m_staticBitmap44, 0, wxALL|wxALIGN_CENTER, WXC_FROM_DIP(5));
    m_staticBitmap44->SetMinSize(wxSize(64,64));
    
    boxSizer37->Add(0, 15, 1, wxALL, WXC_FROM_DIP(5));
    
    m_projects = new wxStaticText(m_mainPanel, wxID_ANY, _("Projects"), wxDefaultPosition, wxDLG_UNIT(m_mainPanel, wxSize(-1,-1)), 0);
    
    boxSizer37->Add(m_projects, 0, wxALL|wxALIGN_RIGHT, WXC_FROM_DIP(5));
    
    m_engines = new wxStaticText(m_mainPanel, wxID_ANY, _("Engines"), wxDefaultPosition, wxDLG_UNIT(m_mainPanel, wxSize(-1,-1)), 0);
    
    boxSizer37->Add(m_engines, 0, wxALL|wxALIGN_RIGHT, WXC_FROM_DIP(5));
    m_mainPanel->SetMinSize(wxSize(130,-1));
    
    wxBoxSizer* boxSizer56 = new wxBoxSizer(wxVERTICAL);
    
    flexGridSizer30->Add(boxSizer56, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_projectPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxTAB_TRAVERSAL);
    
    boxSizer56->Add(m_projectPanel, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizer38 = new wxBoxSizer(wxVERTICAL);
    m_projectPanel->SetSizer(boxSizer38);
    
    wxBoxSizer* boxSizer39 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer38->Add(boxSizer39, 0, wxALL|wxALIGN_RIGHT, WXC_FROM_DIP(5));
    
    m_newProject = new wxStaticText(m_projectPanel, wxID_ANY, _("Create New Project"), wxDefaultPosition, wxDLG_UNIT(m_projectPanel, wxSize(-1,-1)), 0);
    
    boxSizer39->Add(m_newProject, 0, wxALL, WXC_FROM_DIP(5));
    
    m_addProject = new wxStaticText(m_projectPanel, wxID_ANY, _("Add Existing Project"), wxDefaultPosition, wxDLG_UNIT(m_projectPanel, wxSize(-1,-1)), 0);
    
    boxSizer39->Add(m_addProject, 0, wxALL, WXC_FROM_DIP(5));
    
    m_enginePanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxTAB_TRAVERSAL);
    m_enginePanel->Hide();
    
    boxSizer56->Add(m_enginePanel, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizer384 = new wxBoxSizer(wxVERTICAL);
    m_enginePanel->SetSizer(boxSizer384);
    
    wxBoxSizer* boxSizer395 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer384->Add(boxSizer395, 0, wxALL|wxALIGN_RIGHT, WXC_FROM_DIP(5));
    
    m_newEngine = new wxStaticText(m_enginePanel, wxID_ANY, _("Create New Engine"), wxDefaultPosition, wxDLG_UNIT(m_enginePanel, wxSize(-1,-1)), 0);
    
    boxSizer395->Add(m_newEngine, 0, wxALL, WXC_FROM_DIP(5));
    
    m_addEngine = new wxStaticText(m_enginePanel, wxID_ANY, _("Add Existing Engine"), wxDefaultPosition, wxDLG_UNIT(m_enginePanel, wxSize(-1,-1)), 0);
    
    boxSizer395->Add(m_addEngine, 0, wxALL, WXC_FROM_DIP(5));
    
    m_statusBar32 = new wxStatusBar(this, wxID_ANY, wxSTB_DEFAULT_STYLE);
    m_statusBar32->SetFieldsCount(1);
    this->SetStatusBar(m_statusBar32);
    
    SetName(wxT("MainFrameBaseClass"));
    SetMinClientSize(wxSize(600,350));
    SetSize(wxDLG_UNIT(this, wxSize(600,350)));
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
    // Connect events
    m_projects->Bind(wxEVT_LEFT_UP, &MainFrameBaseClass::OnProjectsLeftUp, this);
    m_engines->Bind(wxEVT_LEFT_UP, &MainFrameBaseClass::OnEnginesLeftUp, this);
    m_newProject->Bind(wxEVT_LEFT_UP, &MainFrameBaseClass::OnCreateProjectLeftUp, this);
    m_addProject->Bind(wxEVT_LEFT_UP, &MainFrameBaseClass::OnAddProjectLeftUp, this);
    m_newEngine->Bind(wxEVT_LEFT_UP, &MainFrameBaseClass::OnCreateEngineLeftUp, this);
    m_addEngine->Bind(wxEVT_LEFT_UP, &MainFrameBaseClass::OnAddEngineLeftUp, this);
    
}

MainFrameBaseClass::~MainFrameBaseClass()
{
    m_projects->Unbind(wxEVT_LEFT_UP, &MainFrameBaseClass::OnProjectsLeftUp, this);
    m_engines->Unbind(wxEVT_LEFT_UP, &MainFrameBaseClass::OnEnginesLeftUp, this);
    m_newProject->Unbind(wxEVT_LEFT_UP, &MainFrameBaseClass::OnCreateProjectLeftUp, this);
    m_addProject->Unbind(wxEVT_LEFT_UP, &MainFrameBaseClass::OnAddProjectLeftUp, this);
    m_newEngine->Unbind(wxEVT_LEFT_UP, &MainFrameBaseClass::OnCreateEngineLeftUp, this);
    m_addEngine->Unbind(wxEVT_LEFT_UP, &MainFrameBaseClass::OnAddEngineLeftUp, this);
    
}
