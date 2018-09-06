#include "main.h"

int CatchMole(int *a)
{
	int count = 0;

	while (TRUE)
	{

		clock_t start = clock();

		if (_kbhit())
		{
			int key = _getch();
			int d = key - 48;

			start = clock();

			if (d == *a)
			{
				count = 1;
				return count;
				break;
			}
			else
			{
				count = 2;
				return count;
				break;
			}

		}

		if ((clock() - start) / CLOCKS_PER_SEC > 2.0f)
		{
			count = 3;
			return count;
			break;
		}
	}
}