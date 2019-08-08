/***************************************************************
 * Name:      CommentMain.h
 * Purpose:   Defines Application Frame
 * Author:    Sanjula ()
 * Created:   2019-07-17
 * Copyright: Sanjula ()
 * License:
 **************************************************************/

#ifndef COMMENTMAIN_H
#define COMMENTMAIN_H

 //(*Headers(CommentMain)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/listbox.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <map>;
#include <vector>
//*)

class CommentMain : public wxFrame
{
public:

	CommentMain(wxWindow* parent, wxWindowID id = -1);

	std::map<std::string, std::vector<std::string>> originalData;

	void loadCommentTitles(std::map<std::string, std::vector<std::string>> output);

private:

	//(*Handlers(CommentMain)
	void OnButton1Click(wxCommandEvent& event);
	void OnButton2Click(wxCommandEvent& event);
	void OnButton3Click(wxCommandEvent& event);
	void OnListBox1Select(wxCommandEvent& event);
	//*)

	//(*Identifiers(CommentMain)
	static const long ID_LISTBOX1;
	static const long ID_BUTTON1;
	static const long ID_STATICTEXT1;
	static const long ID_TEXTCTRL1;
	static const long ID_STATICTEXT2;
	static const long ID_TEXTCTRL3;
	static const long ID_TEXTCTRL2;
	static const long ID_BUTTON2;
	static const long ID_BUTTON3;
	//*)

	//(*Declarations(CommentMain)
	wxButton* Button1;
	wxButton* Button2;
	wxButton* Button3;
	wxListBox* ListBox1;
	wxStaticText* StaticText1;
	wxStaticText* StaticText2;
	wxTextCtrl* TextCtrl1;
	wxTextCtrl* TextCtrl2;
	wxTextCtrl* TextCtrl3;
	//*)

	DECLARE_EVENT_TABLE()
};

#endif // COMMENTMAIN_H
