#include "main.h"

int main()
{
	int count = 0;
	int last = 0;
	srand((unsigned)time(NULL));

	StartMoleGame();

	while (TRUE)
	{
		KeepHole();

		int* rn = Location();

		int IsMoveMole = MoveMole(rn);
		 
		int IsCatchMole = CatchMole(&IsMoveMole);
		 
		int FinishMoleGame = PrintResult(&IsCatchMole, &count, &last);
	
		if (FinishMoleGame == 10)
			break;
		
		Sleep(500);
		system("cls");
		free(rn);
	}
	return 0;
}
