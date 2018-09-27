#include "main.h"

int main()
{
	int sec = 3;
	int count = 0;
	srand((unsigned)time(NULL));
	setcolor(10, 0);					//10 :초록
		
										//게임 시작 전 화면
	gotoxy(18, 3);
	cout << "┌────────────────────┐" << endl;
	gotoxy(18, 4);
	cout << "│                                        │" << endl;
	gotoxy(18, 5);
	cout << "│            두더지 잡기게임             │" << endl;
	gotoxy(18, 6);
	cout << "│                                        │" << endl;
	gotoxy(18, 7);
	cout << "│         아무키나 누르면 시작!          │" << endl;
	gotoxy(18, 8);
	cout << "│        게임 조작키 :  1~9 번키         │" << endl;
	gotoxy(18, 9);
	cout << "│                                        │" << endl;
	gotoxy(18, 10);
	cout << "└────────────────────┘" << endl;

	_getch();
	system("cls");

	

	for (int i = 0; i < 3; i++)			// 게임 5초 대기
	{
		setcolor(10, 0);                //10 :초록
		gotoxy(5, 5);
		cout << sec << "초후에 시작합니다" << endl;
		sec--;
		Sleep(1000);
	}
	system("cls");
	//게임 시작 화면

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