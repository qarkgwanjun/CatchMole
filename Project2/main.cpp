#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <Time.h>
#include <conio.h>
#define TRUE 1
using namespace std;

void gotoxy(int x, int y) // 콘솔 화면 커서 이동
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
void setcolor(int color, int bgcolor) //콘솔 화면 글자 색 변경
{
	color &= 0xf;
	bgcolor &= 0xf;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}
void hole()
{
	int j = 10;
	int a = 0;
	for (int i = 0; i < 9; i++) {
		a += 20;
		gotoxy(a, j);
		cout << "(|      |)" << endl;
		if (a % 3 == 0) {
			j += 3;
			a = 0;
		}
	}
	Sleep(100);
}
int Position(int *rn1)
{
	int c = 0;
	int a = rand() % 3;
	int b = rand() % 3 + 3;
	gotoxy(rn1[a], rn1[b]);
	cout << " |0    0|" << endl;

	if (a == 0 && b == 3)
		return 1;
	else if (a == 0 && b == 4)
		return 2;
	else if (a == 0 && b == 5)
		return 3;
	else if (a == 1 && b == 3)
		return 4;
	else if (a == 1 && b == 4)
		return 5;
	else if (a == 1 && b == 5)
		return 6;
	else if (a == 2 && b == 3)
		return 7;
	else if (a == 2 && b == 4)
		return 8;
	else if (a == 2 && b == 5)
		return 9;
}
void Catchmole(int rn1)
{
	switch (rn1)
	{
	case 1:


	default:
		break;
	}
}
int* TwoReturn()
{
	// 입력받은 크기 만큼의 int의 배열을 만든다.
	void* ar1 = (int*)malloc(sizeof(int) * 6);
	int* ip1 = (int*)ar1;

	ip1[0] = 20;
	ip1[1] = 40;
	ip1[2] = 60;
	ip1[3] = 9;
	ip1[4] = 12;
	ip1[5] = 15;

	return ip1;
}
int main()
{
	int random = 0;
	int sec = 3;
	srand((unsigned)time(NULL));
	setcolor(10, 0);                //10 :초록

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
	cout << "│        아무키나 누르면 시작!           │" << endl;
	gotoxy(18, 8);
	cout << "│        게임 조작키 :  1~9 번키         │" << endl;
	gotoxy(18, 9);
	cout << "│                                        │" << endl;
	gotoxy(18, 10);
	cout << "└────────────────────┘" << endl;

	_getch();
	system("cls");
	//게임 대기 화면

	for (int i = 0; i < 3; i++) // 게임 5초 대기
	{
		setcolor(10, 0);                //10 :초록
		gotoxy(5, 5);
		cout << sec << "초후에 시작합니다" << endl;
		sec--;
		Sleep(1000);
	}
	system("cls");
	//게임 시작 화면
	sec = 60;
	while (1)
	{
		int* rn = TwoReturn();
		hole();

		int Catchmole = Position(rn);


	}

	return 0;
}