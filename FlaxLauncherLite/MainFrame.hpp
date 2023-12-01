#ifndef MAINFRAME_HPP
#define MAINFRAME_HPP
#include "wxcrafter.hpp"

class MainFrame : public MainFrameBaseClass
{
public:
    MainFrame(wxWindow* parent);
    virtual ~MainFrame();
protected:
    virtual void OnAddEngineLeftUp(wxMouseEvent& event);
    virtual void OnAddProjectLeftUp(wxMouseEvent& event);
    virtual void OnCreateProjectLeftUp(wxMouseEvent& event);
    virtual void OnEnginesLeftUp(wxMouseEvent& event);
    virtual void OnProjectsLeftUp(wxMouseEvent& event);
    //virtual void OnLeftUp(wxMouseEvent& event);
    virtual void OnAbout(wxCommandEvent& event);
    virtual void OnExit(wxCommandEvent& event);
};
#endif // MAINFRAME_HPP
