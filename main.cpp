#include "main.h"

int main()
{
	int count = 0;
	srand((unsigned)time(NULL));

	StartMoleGame();
	while (TRUE)
	{
		KeepHole();
		int* rn = Location();
		int IsMoleHead = MoveMole(rn);
		
	    int score = MoleToCatch(&IsMoleHead);
		PrintResult(&score, &count);

		Sleep(500);
		system("cls");
		free(rn);
	}
	return 0;
}