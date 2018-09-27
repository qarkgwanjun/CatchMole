#include "main.h"

int PrintResult(int *Score1, int* count, int* last)
{
	if (*Score1 == 1) {
		*count += 100;
		*last += 100;
		gotoxy(40, 19);
		cout << "성공 : " << *count << "점";
	}
	else if (*Score1 == 2) {
		*count -= 100;
		*last += 100;
		gotoxy(40, 19);
		cout << "실패 : " << *count << "점";
	}
	else if (*Score1 == 3) {
		*count -= 100;
		*last += 100;
		gotoxy(40, 19);
		cout << "시간초과!!: " << *count << "점";
	}
	if (*last == 500) {
		system("cls");
		setcolor(10, 0);

		gotoxy(18, 3);
		cout << "┌────────────────────┐" << endl;
		gotoxy(18, 4);
		cout << "│                                        │" << endl;
		gotoxy(18, 5);
		cout << "│            두더지 잡기게임             │" << endl;
		gotoxy(18, 6);
		cout << "│                                        │" << endl;
		gotoxy(18, 7);
		cout << "│          게임이 종료되었습니다.        │" << endl;
		gotoxy(18, 8);
		cout << "│                                        │" << endl;
		gotoxy(18, 9);
		cout << "│           플레이어 : " << *count << " 점" << "           │" << endl;
		gotoxy(18, 10);
		cout << "│                                        │" << endl;
		gotoxy(18, 11);
		cout << "└────────────────────┘" << endl;
	}
	return *last;
}