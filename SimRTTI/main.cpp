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

	return 0;
}
