#include "main.h"

int main()
{
	int count = 0;
	int last = 0;
	srand((unsigned)time(NULL));

	StartMoleGame();
	//게임 시작 화면
	
	while (TRUE)
	{
		int* rn = Location();
		KeepHole();

		int IsMoleHead = MoveMole(rn);
		 
		//MoleToCatch(&IsMoleHead);
		 
		int Score = CatchMole(&IsMoleHead);

		int FinishMoleGame = PrintResult(&Score, &count, &last);
		if (FinishMoleGame == 1000)
		{
			break;
		}
		Sleep(1000);
		system("cls");
		free(rn);
	}
	return 0;
}
