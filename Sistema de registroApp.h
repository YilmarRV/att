//---------------------------------------------------------------------------
//
// Name:        Sistema de registroApp.h
// Author:      Niña
// Created:     14/05/2017 11:08:57 p.m.
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __SISTEMA_DE_REGISTROFRMApp_h__
#define __SISTEMA_DE_REGISTROFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class Sistema_de_registroFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
