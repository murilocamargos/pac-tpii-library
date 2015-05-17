#ifndef _MYFRAME_H
#define _MYFRAME_H

#include <wx/wx.h>
#include "../Menu/MyMenu.h"

class MyFrame : public wxFrame {
    private:
        MyMenu *menu;
        wxApp *app;
    public:
        MyFrame(const wxString& title, const wxPoint& position, const wxSize& size, wxApp *app);
        
        void OnMenuAboutLangPT(wxCommandEvent &);
        void OnMenuAboutLangEN(wxCommandEvent &);
        
        void OnMenuFileNew(wxCommandEvent &);
        void OnMenuFileSave(wxCommandEvent &);
        void OnMenuFileOpen(wxCommandEvent &);
        void OnMenuFileQuit(wxCommandEvent &);
        
        enum {
            MENU_ABOUT_LANG_EN,
            MENU_ABOUT_LANG_PT,
            MENU_FILE_NEW,
            MENU_FILE_SAVE,
            MENU_FILE_OPEN,
            MENU_FILE_QUIT
        };
        
        DECLARE_EVENT_TABLE();
};

#endif
