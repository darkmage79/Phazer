// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_NON_CONFORMING_WCSTOK
#define _CRT_SECURE_NO_WARNINGS

#pragma once
//   _____            _           _
//   \_   \_ __   ___| |_   _  __| | ___  ___
//    / /\/ '_ \ / __| | | | |/ _` |/ _ \/ __|
// /\/ /_ | | | | (__| | |_| | (_| |  __/\__ \
// \____/ |_| |_|\___|_|\__,_|\__,_|\___||___/
#pragma comment(lib, "wlanapi.lib")
#include <WinSock2.h>
#include "targetver.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <tchar.h>
#include <conio.h>
#include <process.h>
#include <windows.h>
#include <wlanapi.h>
#include <WinUser.h>
#include <fstream>
#include <time.h>
#include "dirent.h"
#include "wtypes.h"
#include "Functions.h"
#pragma comment(lib, "ws2_32.lib") 

#ifndef WLAN_PROFILE_GET_PLAINTEXT_KEY
#define WLAN_PROFILE_GET_PLAINTEXT_KEY 4 // Dont have the latest platform SDK on this box
#endif
