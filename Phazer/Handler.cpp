#include "stdafx.h"
using namespace std;

void CtrlHandler(DWORD fdwCtrlType) {
	switch (fdwCtrlType) {

	case CTRL_C_EVENT:
		cout << "Exiting current process...\n";
		break;
	}
}