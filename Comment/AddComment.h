#ifndef ADDCOMMENT_H
#define ADDCOMMENT_H

//(*Headers(AddComment)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/textctrl.h>
//*)

class AddComment : public wxDialog
{
public:

	AddComment(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize);

	//(*Declarations(AddComment)
	wxButton* Button1;
	wxChoice* Choice1;
	wxStaticText* StaticText1;
	wxStaticText* StaticText2;
	wxTextCtrl* TextCtrl1;
	wxTextCtrl* TextCtrl2;
	//*)

protected:

	//(*Identifiers(AddComment)
	static const long ID_STATICTEXT1;
	static const long ID_TEXTCTRL1;
	static const long ID_STATICTEXT2;
	static const long ID_CHOICE1;
	static const long ID_TEXTCTRL2;
	static const long ID_BUTTON1;
	//*)

private:

	//(*Handlers(AddComment)
	void OnButton1Click(wxCommandEvent& event);
	void OnChoice1Select(wxCommandEvent& event);
	//*)

	DECLARE_EVENT_TABLE()
};

#endif
