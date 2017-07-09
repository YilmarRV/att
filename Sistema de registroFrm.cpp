///-----------------------------------------------------------------
///
/// @file      Sistema de registroFrm.cpp
/// @author    Niña
/// Created:   14/05/2017 11:08:58 p.m.
/// @section   DESCRIPTION
///            Sistema_de_registroFrm class implementation
///
///------------------------------------------------------------------

#include "Sistema de registroFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Sistema_de_registroFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Sistema_de_registroFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Sistema_de_registroFrm::OnClose)
	EVT_ACTIVATE(Sistema_de_registroFrm::Sistema_de_registroFrmActivate)
	
	EVT_UPDATE_UI(ID_WXPANEL1,Sistema_de_registroFrm::WxPanel1UpdateUI)
END_EVENT_TABLE()
////Event Table End

Sistema_de_registroFrm::Sistema_de_registroFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

Sistema_de_registroFrm::~Sistema_de_registroFrm()
{
}

void Sistema_de_registroFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(0, -2), wxSize(560, 302));
	WxPanel1->SetBackgroundColour(wxColour(111,183,255));

	WxButton2 = new wxButton(WxPanel1, ID_WXBUTTON2, _("Guardar"), wxPoint(38, 169), wxSize(90, 35), 0, wxDefaultValidator, _("WxButton2"));
	WxButton2->SetForegroundColour(wxColour(0,0,0));
	WxButton2->SetFont(wxFont(9, wxSWISS, wxNORMAL, wxBOLD, false));

	WxStaticText1 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT1, _("Serial de la vaca"), wxPoint(21, 29), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetForegroundColour(wxColour(0,0,0));
	WxStaticText1->SetFont(wxFont(12, wxSWISS, wxITALIC, wxNORMAL, false, _("Lucida Bright")));

	WxMemo3 = new wxTextCtrl(this, ID_WXMEMO3, wxEmptyString, wxPoint(155, 22), wxSize(110, 24), wxTE_MULTILINE, wxDefaultValidator, _("WxMemo3"));
	WxMemo3->SetMaxLength(0);
	WxMemo3->AppendText(_(""));
	WxMemo3->SetFocus();
	WxMemo3->SetInsertionPointEnd();

	WxStaticText2 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT2, _("Litros"), wxPoint(29, 115), wxDefaultSize, 0, _("WxStaticText2"));
	WxStaticText2->SetForegroundColour(wxColour(0,0,0));
	WxStaticText2->SetFont(wxFont(12, wxSWISS, wxITALIC, wxNORMAL, false, _("Lucida Bright")));

	WxMemo2 = new wxTextCtrl(this, ID_WXMEMO2, wxEmptyString, wxPoint(99, 109), wxSize(110, 24), wxTE_MULTILINE, wxDefaultValidator, _("WxMemo2"));
	WxMemo2->SetMaxLength(0);
	WxMemo2->AppendText(_(""));
	WxMemo2->SetFocus();
	WxMemo2->SetInsertionPointEnd();

	WxFindReplaceDialog1_Data = new wxFindReplaceData(0);
	WxFindReplaceDialog1_Data->SetFindString(_(""));
	WxFindReplaceDialog1_Data->SetReplaceString(_(""));
	WxFindReplaceDialog1 =  new wxFindReplaceDialog(this, WxFindReplaceDialog1_Data, _("") ,0);

	WxStaticText4 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT4, _("Producción de leche"), wxPoint(33, 79), wxDefaultSize, 0, _("WxStaticText4"));
	WxStaticText4->SetForegroundColour(wxColour(0,0,0));
	WxStaticText4->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxBOLD, false, _("Lucida Bright")));

	WxButton1 = new wxButton(WxPanel1, ID_WXBUTTON1, _("Cancelar"), wxPoint(134, 169), wxSize(90, 35), 0, wxDefaultValidator, _("WxButton1"));
	WxButton1->SetForegroundColour(wxColour(0,0,0));
	WxButton1->SetFont(wxFont(9, wxSWISS, wxNORMAL, wxBOLD, false));

	SetTitle(_("Sistema de registro"));
	SetIcon(wxNullIcon);
	SetSize(37,0,576,339);
	Center();
	
	////GUI Items Creation End
}

void Sistema_de_registroFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * Sistema_de_registroFrmActivate
 */
void Sistema_de_registroFrm::Sistema_de_registroFrmActivate(wxActivateEvent& event)
{
	// insert your code here
}

/*
 * WxPanel1UpdateUI
 */
void Sistema_de_registroFrm::WxPanel1UpdateUI(wxUpdateUIEvent& event)
{
	// insert your code here
}
