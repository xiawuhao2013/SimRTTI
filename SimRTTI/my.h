#ifndef MY_H
#define MY_H

#include <iostream>

#include "mfc.h"

namespace aq {

	class CMyWinApp :public CWinApp {
	public:
		CMyWinApp::CMyWinApp () {}
		CMyWinApp::~CMyWinApp () {}
		virtual BOOL InitInstance ();
	};

	class CMyFrameWnd :public CFrameWnd {
	public:
		CMyFrameWnd::CMyFrameWnd ();
		CMyFrameWnd::~CMyFrameWnd () {}
	};

	class CMyDoc :public CDocument {
	public:
		CMyDoc::CMyDoc () {}
		CMyDoc::~CMyDoc () {}
	};

	class CMyView :public CView {
	public:
		CMyView::CMyView () {}
		CMyView::~CMyView () {}
	};

	// global function
	void PrintAllClasses ();

}	// namespace aq

#endif	// MY_H
