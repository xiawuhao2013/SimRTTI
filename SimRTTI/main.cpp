#include <iostream>

#include "mfc.h"
#include "my.h"

using namespace aq;

int main () {
	CWinApp* pApp = AfxGetApp ();

	pApp->InitApplication ();
	pApp->InitInstance ();
	pApp->Run ();

	PrintAllClasses ();

	system ("pause");

	// for IsKindOf function
	CMyWinApp* pMyWinApp = new CMyWinApp;
	CMyFrameWnd* pMyFrameWnd = new CMyFrameWnd;
	CMyDoc* pMyDoc = new CMyDoc;
	CMyView* pMyView = new CMyView;
	
	std::cout << pMyWinApp->IsKindOf (RUNTIME_CLASS(CObject)) << std::endl;
	std::cout << pMyWinApp->IsKindOf (RUNTIME_CLASS (CWinThread)) << std::endl;
	std::cout << pMyWinApp->IsKindOf (RUNTIME_CLASS (CWinApp)) << std::endl;
	std::cout << pMyWinApp->IsKindOf (RUNTIME_CLASS (CCmdTarget)) << std::endl;

	system ("pause");

	// Checkfor delete`s action.
	delete pMyWinApp;
	delete pMyFrameWnd;
	delete pMyDoc;
	delete pMyView;

	system ("pause");

	return 0;
}
