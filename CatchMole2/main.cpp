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
		KeepHole();

		int* rn = Location();

		int IsMoveMole = MoveMole(rn);
		 
		int IsCatchMole = CatchMole(&IsMoveMole);
		 
		int FinishMoleGame = PrintResult(&IsCatchMole, &count, &last);
	
		if (FinishMoleGame == 1000)
			break;
		
		Sleep(100);
		system("cls");
		free(rn);
	}
	return 0;
}
