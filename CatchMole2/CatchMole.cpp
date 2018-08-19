#include "main.h"

int CatchMole(int *a) {
	int key = _getch();
	int d = key - 48;
	int count = 0;

	if (_kbhit())
	{
		if (d == *a) {
			count = 11;
			return count;
		}
		else {
			count = 12;
			return count;
		}
	}
}