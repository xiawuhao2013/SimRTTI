#ifndef MY_H
#define MY_H

#include <iostream>

#include<iostream>
#include "mfc.h"

namespace aq {

	class CMyWinApp :public CWinApp {
		DECLARE_DYNAMIC (CMyWinApp)
	public:
		CMyWinApp::CMyWinApp () {
			std::cout << "CMyWinApp construction" << std::endl;
		}
		CMyWinApp::~CMyWinApp () {
			std::cout << "CMyWinApp destruction" << std::endl;
		}
		virtual BOOL InitInstance ();
	};

	class CMyFrameWnd :public CFrameWnd {
		DECLARE_DYNAMIC (CMyFrameWnd)
	public:
		CMyFrameWnd::CMyFrameWnd ();
		CMyFrameWnd::~CMyFrameWnd () {
			std::cout << "CMyFrameWnd destruction" << std::endl;
		}
	};

	class CMyDoc :public CDocument {
		DECLARE_DYNAMIC (CMyDoc)
	public:
		CMyDoc::CMyDoc () {
			std::cout << "CMyDoc construction" << std::endl;
		}
		CMyDoc::~CMyDoc () {
			std::cout << "CMyDoc destruction" << std::endl;
		}
	};

	class CMyView :public CView {
		DECLARE_DYNAMIC (CMyView)
	public:
		CMyView::CMyView () {
			std::cout << "CMyView construction" << std::endl;
		}
		CMyView::~CMyView () {
			std::cout << "CMyView destruction" << std::endl;
		}
	};

	// global function
	void PrintAllClasses ();

}	// namespace aq

#endif	// MY_H
