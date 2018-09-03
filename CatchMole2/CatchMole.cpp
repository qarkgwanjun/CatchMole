#include "main.h"

int CatchMole(int *a) {
	int count = 0;
	clock_t start = clock();
	while (TRUE) {
		int key = _getch();
		int num = key - 48;
		start = clock();
		if (_kbhit()) {
			if (num == *a) {
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
		if (((clock() - start) / CLOCKS_PER_SEC) > 0) {
			while (1)
			{
				system("cls");
			}
		}	
	}
}