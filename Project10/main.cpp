#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <Time.h>

#define TRUE 1
using namespace std;

void gotoxy(int x, int y) // �ܼ� ȭ�� Ŀ�� �̵�
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
void setcolor(int color, int bgcolor) //�ܼ� ȭ�� ���� �� ����
{
	color &= 0xf;
	bgcolor &= 0xf;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}
void hole() {
	int j = 10;
	int a = 0;
	for (int i = 0; i < 9; i++) {
		a += 20;
		gotoxy(a, j);
		cout << "(       )" << endl;
		if (a % 3 == 0) {
			j += 3;
			a = 0;
		}
	}
	Sleep(100);
}
void mole(int *rn1)
{
	

	int ran1 = rand();
	int ran2 = rand();
	int a = ran1 % 3 ;
	int b = ran2 % 3 + 3;
	int d = rn1[a];
	int e = rn1[b];
	
	cout << d << endl;
	cout << e << endl;

}
/*
int Random(){
int molehead = 0;
molehead = (rand() % 9) + 1;

if (molehead == 1)
return 1;
else if (molehead == 2)
return 2;
else if (molehead == 3)
return 3;
else if (molehead == 4)
return 4;
else if (molehead == 5)
return 5;
else if (molehead == 6)
return 6;
else if (molehead == 7)
return 7;
else if (molehead == 8)
return 8;
else if (molehead == 9)
return 9;
}
*/
int* TwoReturn()
{
	// �Է¹��� ũ�� ��ŭ�� int�� �迭�� �����.
	
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
	/*int Randomhead = Random();
	int key = 0;
	int random = 0;
	int sec = 5;
	srand((unsigned)time(NULL));

	setcolor(10, 0);                //10 :�ʷ�

	gotoxy(50, 13);
	cout << "    �δ��� ���" << endl;
	gotoxy(50, 14);
	cout << "�ƹ� Ű�� ���� �ּ���" << endl;

	cin >> key;
	if (key >= 0 && key <= 127)
	{
	system("cls");
	for (int i = 0; i < 5; i++) // ���� 5�� ���
	{
	setcolor(10, 0);                //10 :�ʷ�
	gotoxy(60, 13);
	cout << sec << endl;
	sec--;
	Sleep(1000);
	}
	}
	*/
	srand((unsigned)time(NULL));


	int* a = TwoReturn();
	mole(a);

	free(a);

	return 0;
}