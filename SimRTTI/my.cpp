#include "my.h"

namespace aq {

	CMyWinApp theApp;

	BOOL CMyWinApp::InitInstance () {
		m_pMainWnd = new CMyFrameWnd;
		return TRUE;
	}

	CMyFrameWnd::CMyFrameWnd () {
		Create ();
	}

	void PrintAllClasses () {
		CRuntimeClass* pClass;

		// Walk through the simple list of registered classes.
		for ( pClass = CRuntimeClass::pFirstClass; pClass != NULL; pClass = pClass->m_pNextClass ) {
			std::cout << pClass->m_lpszClassName << std::endl;
			std::cout << pClass->m_nObjectSize << std::endl;
			std::cout << pClass->m_wSchema << std::endl;
		}
	}

}	// namespace aq
