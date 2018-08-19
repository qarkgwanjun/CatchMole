#include "main.h"

int MoleToCatch(int *a){
	int count = 0;
	int key = _getch();
	int touch = key - 48;

	if (_kbhit())
	{
		if (touch == *a) {
			count = 11;
			return count;
		}
		else {
			count = 12;
			return count;
		}
	}
}