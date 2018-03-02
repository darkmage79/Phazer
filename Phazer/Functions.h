#pragma once
#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED


//    ___                 _
//   / __\   _ _ __   ___| |_(_) ___  _ __  ___
//  / _\| | | | '_ \ / __| __| |/ _ \| '_ \/ __|
// / /  | |_| | | | | (__| |_| | (_) | | | \__ \
// \/    \__,_|_| |_|\___|\__|_|\___/|_| |_|___/
void VirusMenu();
void SillyMouse();
void forkbomb();
void Caps();
void Enter();
void CD_Virus();
void Shutdown();
void Persistent_Shutdown();
void Instant_Death();
void Computer_Crash();
void Computer_Crash_XP();
void NO();
void Break_TXT();
void MeltDown();
void NetFlood();
void InternetShutdown();
void SpaceEaterDLL();
void MouseDisable();
void MouseEnable();
void udpFlood(char targetIP[17]);
void CtrlHandler(DWORD fdwCtrlType);
void NetGrabber();
bool Inject(DWORD pId, char *dllname);
//void keylist();
void VirusOptions();
/*HEX COLOR LAYOUT FUNCTIONS*/
void setColorLightBlue();
void setColorDarkBlue();
void setColorLightRed();
void setColorLightGreen();
void setColorDarkPurple();

void menu();

#endif // FUNCTIONS_H_INCLUDED

