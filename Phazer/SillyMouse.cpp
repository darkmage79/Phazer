#include "stdafx.h"
#include <windows.h>
using namespace std;
/*********************************
* GetDesktopResolution gets the
* Resolution of the Desktop for
* The method SillyMouse(),
* which continually randomizes the
* mouse's location on the screen,
* according to the resolution
* of the screen so it's always
* accurate
*********************************/

int rand();

void GetDesktopResolution(int& horizontal, int& vertical){
	RECT desktop;
	// Get a handle to the desktop window
	const HWND hDesktop = GetDesktopWindow();
	// Get the size of screen to the variable desktop
	GetWindowRect(hDesktop, &desktop);
	// The top left corner will have coordinates (0,0)
	// and the bottom right corner will have coordinates
	// (horizontal, vertical)
	horizontal = desktop.right;
	vertical = desktop.bottom;
}

void SillyMouse() {
	int seconds;
	int vertical = 0, horizontal = 0;
	unsigned long beginTime = clock();
	unsigned long elapsedTime = (clock() - beginTime) / CLOCKS_PER_SEC;

	cout << "<How long would you like sillymouse to run for?(Seconds)>: ";
	cin >> seconds;

	clock_t endwait(clock() + seconds * CLK_TCK);

	GetDesktopResolution(horizontal, vertical);
	bool Running = true;

	cout << "X-Resolution: " << horizontal << "\nY-Resolution: " << vertical << endl;
	while (clock() < endwait) {
		SetCursorPos(rand() % horizontal, rand() % vertical);
		if (endwait == seconds)
			break;
	}

}
