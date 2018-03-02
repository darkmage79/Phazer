#include "stdafx.h"
using namespace std;

HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);

void setColorLightGreen() {
	SetConsoleTextAttribute(hstdout, 0x0A);
}

void setColorLightBlue() {
	SetConsoleTextAttribute(hstdout, 0x0B);
}

void setColorDarkBlue() {
	SetConsoleTextAttribute(hstdout, 0x09);
}

void setColorLightRed() {
	SetConsoleTextAttribute(hstdout, 0x0C);
}

void setColorDarkPurple() {
	SetConsoleTextAttribute(hstdout, 0x05);
}

/****************

0 = Black
8 = Gray

1 = Blue
9 = Light Blue

2 = Green
A = Light Green

3 = Aqua
B = Light Aqua

4 = Red
C = Light Red

5 = Purple
D = Light Purple

6 = Yellow
E = Light Yellow

7 = White
F = Bright White
******************/