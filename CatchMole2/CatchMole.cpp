#include "main.h"

int CatchMole(int *a) {
	int count = 0;
	while (TRUE)
	{
		int key = _getch();
		int d = key - 48;
		if (_kbhit()) {
			if (d == *a) {
				count = 1;
				return count;
				break;
			}
			else {
				count = 2;
				return count;
				break;
			}
		}
	}
}