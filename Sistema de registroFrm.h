///-----------------------------------------------------------------
///
/// @file      Sistema de registroFrm.h
/// @author    Niña
/// Created:   14/05/2017 11:08:58 p.m.
/// @section   DESCRIPTION
///            Sistema_de_registroFrm class declaration
///
///------------------------------------------------------------------

#ifndef __SISTEMA_DE_REGISTROFRM_H__
#define __SISTEMA_DE_REGISTROFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/fdrepdlg.h>
#include <wx/textctrl.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/panel.h>
////Header Include End

////Dialog Style Start
#undef Sistema_de_registroFrm_STYLE
#define Sistema_de_registroFrm_STYLE wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxMAXIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class Sistema_de_registroFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		Sistema_de_registroFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Sistema de registro"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Sistema_de_registroFrm_STYLE);
		void Sistema_de_registroFrmActivate(wxActivateEvent& event);
		virtual ~Sistema_de_registroFrm();
		void WxPanel1UpdateUI(wxUpdateUIEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxButton *WxButton1;
		wxStaticText *WxStaticText4;
		wxFindReplaceDialog *WxFindReplaceDialog1;
		wxFindReplaceData *WxFindReplaceDialog1_Data;
		wxTextCtrl *WxMemo2;
		wxStaticText *WxStaticText2;
		wxTextCtrl *WxMemo3;
		wxStaticText *WxStaticText1;
		wxButton *WxButton2;
		wxPanel *WxPanel1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXBUTTON1 = 1042,
			ID_WXSTATICTEXT4 = 1041,
			ID_WXMEMO2 = 1032,
			ID_WXSTATICTEXT2 = 1022,
			ID_WXMEMO3 = 1016,
			ID_WXSTATICTEXT1 = 1007,
			ID_WXBUTTON2 = 1004,
			ID_WXPANEL1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
