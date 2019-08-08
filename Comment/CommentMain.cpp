/***************************************************************
 * Name:      CommentMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Sanjula ()
 * Created:   2019-07-17
 * Copyright: Sanjula ()
 * License:
 **************************************************************/

#include "CommentMain.h"
#include "AddComment.h"
#include <wx/msgdlg.h>

 //(*InternalHeaders(CommentMain)
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
	short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
	wxString wxbuild(wxVERSION_STRING);

	if (format == long_f)
	{
#if defined(__WXMSW__)
		wxbuild << _T("-Windows");
#elif defined(__UNIX__)
		wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
		wxbuild << _T("-Unicode build");
#else
		wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
	}

	return wxbuild;
}

//(*IdInit(CommentMain)
const long CommentMain::ID_LISTBOX1 = wxNewId();
const long CommentMain::ID_BUTTON1 = wxNewId();
const long CommentMain::ID_STATICTEXT1 = wxNewId();
const long CommentMain::ID_TEXTCTRL1 = wxNewId();
const long CommentMain::ID_STATICTEXT2 = wxNewId();
const long CommentMain::ID_TEXTCTRL3 = wxNewId();
const long CommentMain::ID_TEXTCTRL2 = wxNewId();
const long CommentMain::ID_BUTTON2 = wxNewId();
const long CommentMain::ID_BUTTON3 = wxNewId();
//*)

BEGIN_EVENT_TABLE(CommentMain, wxFrame)
//(*EventTable(CommentMain)
//*)
END_EVENT_TABLE()

CommentMain::CommentMain(wxWindow* parent, wxWindowID id)
{
	//(*Initialize(CommentMain)
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer4;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
	FlexGridSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(2, 0, 0, 0);
	ListBox1 = new wxListBox(this, ID_LISTBOX1, wxDefaultPosition, wxSize(110, 255), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX1"));
	FlexGridSizer2->Add(ListBox1, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Add"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer3->Add(Button1, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(BoxSizer3, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3 = new wxFlexGridSizer(4, 0, 0, 0);
	FlexGridSizer4 = new wxFlexGridSizer(0, 2, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Title:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer4->Add(StaticText1, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(161, 27), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	FlexGridSizer4->Add(TextCtrl1, 1, wxALL | wxEXPAND, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Status:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer4->Add(StaticText2, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxSize(148, 27), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	TextCtrl3->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	FlexGridSizer4->Add(TextCtrl3, 1, wxALL | wxEXPAND, 5);
	FlexGridSizer3->Add(FlexGridSizer4, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 0);
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(230, 180), wxTE_READONLY | wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	FlexGridSizer3->Add(TextCtrl2, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	Button2 = new wxButton(this, ID_BUTTON2, _("Edit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button2->Disable();
	BoxSizer2->Add(Button2, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(this, ID_BUTTON3, _("Delete"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	Button3->Disable();
	BoxSizer2->Add(Button3, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(BoxSizer2, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_LISTBOX1, wxEVT_COMMAND_LISTBOX_SELECTED, (wxObjectEventFunction)&CommentMain::OnListBox1Select);
	Connect(ID_BUTTON1, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&CommentMain::OnButton1Click);
	Connect(ID_BUTTON2, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&CommentMain::OnButton2Click);
	Connect(ID_BUTTON3, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&CommentMain::OnButton3Click);
	//*)

	//Sample data
	originalData["Title1"] = { "General","Comment1" };
	originalData["Title2"] = { "Issue","Comment2" };
	originalData["Title3"] = { "Warning","Comment3" };
	originalData["Title4"] = { "General","Comment4" };
	loadCommentTitles(originalData);
}

void CommentMain::OnButton1Click(wxCommandEvent& event)
{
	//Add
	AddComment temp_dlg(this);
	int dlg = temp_dlg.ShowModal();
	if (dlg == wxID_OK) {
		originalData[std::string(temp_dlg.TextCtrl1->GetValue())] = { std::string(temp_dlg.Choice1->GetStringSelection()), std::string(temp_dlg.TextCtrl2->GetValue()) };
		loadCommentTitles(originalData);
		ListBox1->SetStringSelection(std::string(temp_dlg.TextCtrl1->GetValue()));
		ListBox1->SendSelectionChangedEvent(wxEVT_COMMAND_LISTBOX_SELECTED);
	}
}

void CommentMain::OnButton2Click(wxCommandEvent& event)
{
	//Edit
	AddComment temp_dlg(this);

	temp_dlg.TextCtrl1->SetLabelText(TextCtrl1->GetValue());
	temp_dlg.Choice1->SetStringSelection(TextCtrl3->GetValue());
	temp_dlg.TextCtrl2->SetLabelText(TextCtrl2->GetValue());
	int dlg = temp_dlg.ShowModal();

	if (dlg == wxID_OK) {
		originalData.erase(std::string(TextCtrl1->GetValue()));
		originalData[std::string(temp_dlg.TextCtrl1->GetValue())] = { std::string(temp_dlg.Choice1->GetStringSelection()), std::string(temp_dlg.TextCtrl2->GetValue())};
		loadCommentTitles(originalData);
		ListBox1->SetStringSelection(std::string(temp_dlg.TextCtrl1->GetValue()));
		ListBox1->SendSelectionChangedEvent(wxEVT_COMMAND_LISTBOX_SELECTED);
	}
}

void CommentMain::OnButton3Click(wxCommandEvent& event)
{
	//Erase
	originalData.erase(std::string(ListBox1->GetString(ListBox1->GetSelection())));
	TextCtrl1->Clear();
	TextCtrl2->Clear();
	TextCtrl3->Clear();
	TextCtrl3->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));

	loadCommentTitles(originalData);

	Button2->Disable();
	Button3->Disable();
}

void CommentMain::OnListBox1Select(wxCommandEvent& event)
{
	//Select comment titles
	Button2->Enable();
	Button3->Enable();

	TextCtrl1->Clear();
	TextCtrl2->Clear();

	std::string title = std::string(ListBox1->GetString(ListBox1->GetSelection()));

	TextCtrl1->SetLabelText(title);
	TextCtrl3->SetLabelText(originalData[title][0]);
	TextCtrl2->SetLabelText(originalData[title][1]);

	if (originalData[title][0]=="General") {
		TextCtrl3->SetBackgroundColour(wxColour(*wxGREEN));
	}
	else if (originalData[title][0] == "Warning") {
		TextCtrl3->SetBackgroundColour(wxColour(*wxYELLOW));
	}
	else if (originalData[title][0] == "Issue") {
		TextCtrl3->SetBackgroundColour(wxColour(*wxRED));
	}
}

void CommentMain::loadCommentTitles(std::map<std::string, std::vector<std::string>> output)
{
	//Loading Data
	ListBox1->Clear();
	
	for (std::map<std::string, std::vector<std::string>>::iterator it = output.begin();it != output.end();it++) {
		ListBox1->Append(it->first);		
	}
}
