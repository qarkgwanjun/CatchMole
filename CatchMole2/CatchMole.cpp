#include "main.h"

int CatchMole(int *a)
{
	int count = 0;
	char key;

	while (TRUE)
	{
		clock_t start = clock();

		while (TRUE)
		{
			start = clock();
			key = _getch();
			int d = key - 48;
			if ((clock() - start) / CLOCKS_PER_SEC > 0.7f)
			{
				count = 3;
				return count;
				break;
			}
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
		}
	}
}