//---------------------------------------------------------------------------
//
// Name:        othello graficoApp.cpp
// Author:      PerozoToyo
// Created:     25/05/2017 18:45:26
// Description: 
//
//---------------------------------------------------------------------------

#include "othello graficoApp.h"
#include "othello graficoFrm.h"

IMPLEMENT_APP(othello_graficoFrmApp)

bool othello_graficoFrmApp::OnInit()
{
    othello_graficoFrm* frame = new othello_graficoFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int othello_graficoFrmApp::OnExit()
{
	return 0;
}
