/***************************************************************
 * Name:      CommentApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Sanjula ()
 * Created:   2019-07-17
 * Copyright: Sanjula ()
 * License:
 **************************************************************/

#include "CommentApp.h"

 //(*AppHeaders
#include "CommentMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(CommentApp);

bool CommentApp::OnInit()
{
	//(*AppInitialize
	bool wxsOK = true;
	wxInitAllImageHandlers();
	if (wxsOK)
	{
		CommentMain* Frame = new CommentMain(0);
		Frame->Show();
		SetTopWindow(Frame);
	}
	//*)
	return wxsOK;

}
