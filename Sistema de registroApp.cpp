//---------------------------------------------------------------------------
//
// Name:        Sistema de registroApp.cpp
// Author:      Niña
// Created:     14/05/2017 11:08:57 p.m.
// Description: 
//
//---------------------------------------------------------------------------

#include "Sistema de registroApp.h"
#include "Sistema de registroFrm.h"

IMPLEMENT_APP(Sistema_de_registroFrmApp)

bool Sistema_de_registroFrmApp::OnInit()
{
    Sistema_de_registroFrm* frame = new Sistema_de_registroFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int Sistema_de_registroFrmApp::OnExit()
{
	return 0;
}
