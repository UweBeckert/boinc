// $Id$
//
// The contents of this file are subject to the BOINC Public License
// Version 1.0 (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
// http://boinc.berkeley.edu/license_1.0.txt
// 
// Software distributed under the License is distributed on an "AS IS"
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
// License for the specific language governing rights and limitations
// under the License. 
// 
// The Original Code is the Berkeley Open Infrastructure for Network Computing. 
// 
// The Initial Developer of the Original Code is the SETI@home project.
// Portions created by the SETI@home project are Copyright (C) 2002
// University of California at Berkeley. All Rights Reserved. 
// 
// Contributor(s):
//
// Revision History:
//
// $Log$
// Revision 1.8  2004/05/29 00:09:40  rwalton
// *** empty log message ***
//
// Revision 1.7  2004/05/27 06:17:57  rwalton
// *** empty log message ***
//
// Revision 1.6  2004/05/21 06:27:14  rwalton
// *** empty log message ***
//
// Revision 1.5  2004/05/17 22:15:09  rwalton
// *** empty log message ***
//
//

#ifndef _BASEWINDOWVIEW_H_
#define _BASEWINDOWVIEW_H_

#if defined(__GNUG__) && !defined(__APPLE__)
#pragma interface "BaseWindowView.cpp"
#endif


class CBaseWindowView : public wxPanel
{
    DECLARE_DYNAMIC_CLASS(CBaseWindowView)

public:
    CBaseWindowView();
    CBaseWindowView(wxNotebook* pNotebook);

    ~CBaseWindowView();

    virtual wxString GetViewName();
    virtual char**   GetViewIcon();

    virtual void OnRender(wxTimerEvent &event);
    virtual bool OnSaveState( wxConfigBase* pConfig );
    virtual bool OnRestoreState( wxConfigBase* pConfig );

};


#endif

