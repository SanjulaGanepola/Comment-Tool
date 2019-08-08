#include "AddComment.h"

//(*InternalHeaders(AddComment)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(AddComment)
const long AddComment::ID_STATICTEXT1 = wxNewId();
const long AddComment::ID_TEXTCTRL1 = wxNewId();
const long AddComment::ID_STATICTEXT2 = wxNewId();
const long AddComment::ID_CHOICE1 = wxNewId();
const long AddComment::ID_BUTTON1 = wxNewId();
const long AddComment::ID_TEXTCTRL2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(AddComment, wxDialog)
//(*EventTable(AddComment)
//*)
END_EVENT_TABLE()

AddComment::AddComment(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	//(*Initialize(AddComment)
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer3;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	FlexGridSizer1 = new wxFlexGridSizer(4, 0, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Title:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer2->Add(StaticText1, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(175, 27), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	FlexGridSizer2->Add(TextCtrl1, 1, wxALL | wxEXPAND, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL | wxEXPAND, 0);
	FlexGridSizer3 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Priority:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer3->Add(StaticText2, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);
	Choice1 = new wxChoice(this, ID_CHOICE1, wxDefaultPosition, wxSize(150, 27), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	FlexGridSizer3->Add(Choice1, 1, wxALL | wxEXPAND, 5);
	FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL | wxEXPAND, 5);
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(207, 143), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	FlexGridSizer1->Add(TextCtrl2, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 0);
	Button1 = new wxButton(this, ID_BUTTON1, _("Save"), wxDefaultPosition, wxSize(86, 35), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer1->Add(Button1, 1, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Choice1->Append("General");
	Choice1->Append("Warning");
	Choice1->Append("Issue");

	Connect(ID_BUTTON1, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&AddComment::OnButton1Click);
	Connect(ID_CHOICE1, wxEVT_COMMAND_CHOICE_SELECTED, (wxObjectEventFunction)&AddComment::OnChoice1Select);
	//*)
}

void AddComment::OnButton1Click(wxCommandEvent& event)
{
	if (!(TextCtrl1->IsEmpty() || TextCtrl2->IsEmpty()) && !(Choice1->GetSelection()== wxNOT_FOUND)) {
		Button1->SetId(wxID_OK);
		this->Close();
	}
}

void AddComment::OnChoice1Select(wxCommandEvent& event)
{
	if (Choice1->GetStringSelection() == "General") {
		Choice1->SetBackgroundColour(wxColour(*wxGREEN));
	}
	else if (Choice1->GetStringSelection() == "Warning") {
		Choice1->SetBackgroundColour(wxColour(*wxYELLOW));
	}
	else if (Choice1->GetStringSelection() == "Issue") {
		Choice1->SetBackgroundColour(wxColour(*wxRED));
	}
}