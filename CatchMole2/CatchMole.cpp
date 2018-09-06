#include "main.h"

int CatchMole(int *a)
{
	clock_t StartTime = 0;
	clock_t DelayTime = 300;
	while (1)
	{
		clock_t CurTime = clock();
		int key = _getch();
		int d = key - 48;
		int count = 0;
		
		if (_kbhit())
		{
			if (d == *a)
			{
				count = 1;
				return count;
			}
			else
			{
				count = 2;
				return count;
			}
		}
		else if (CurTime - StartTime > DelayTime)
		{
			system("cls");
			break;
		}
	}
}