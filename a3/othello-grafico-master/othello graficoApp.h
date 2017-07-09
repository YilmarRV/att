//---------------------------------------------------------------------------
//
// Name:        othello graficoApp.h
// Author:      PerozoToyo
// Created:     25/05/2017 18:45:26
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __OTHELLO_GRAFICOFRMApp_h__
#define __OTHELLO_GRAFICOFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class othello_graficoFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
