#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <Time.h>
#include <conio.h>

#define TRUE 1
using namespace std;

void gotoxy(int x, int y) {// �ܼ� ȭ�� Ŀ�� �̵�
COORD pos = { x,y };
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
void setcolor(int color, int bgcolor) {//�ܼ� ȭ�� ���� �� ����
color &= 0xf;
bgcolor &= 0xf;

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}
void KeepHole() {
	int y = 10;
	int x = 0;
	for (int i = 0; i < 9; i++) {
		x += 20;
		gotoxy(x, y);
		cout << "(|      |)" << endl;
		if (x % 3 == 0) {
			y += 3;
			x = 0;
		}
	}
}
int MoveMole(int *Location) {
	int rn1 = rand() % 3;
	int rn2 = rand() % 3 + 3;
	int c = 0;
	gotoxy(Location[rn1], Location[rn2]);
	cout << " |0 nn 0|" << endl;

	if (Location[rn1] == 20 && Location[rn2] == 9)
		c = 7;
	else if (Location[rn1] == 40 && Location[rn2] == 9)
		c = 8;
	else if (Location[rn1] == 60 && Location[rn2] == 9)
		c = 9;
	else if (Location[rn1] == 20 && Location[rn2] == 12)
		c = 4;
	else if (Location[rn1] == 40 && Location[rn2] == 12)
		c = 5;
	else if (Location[rn1] == 60 && Location[rn2] == 12)
		c = 6;
	else if (Location[rn1] == 20 && Location[rn2] == 15)
		c = 1;
	else if (Location[rn1] == 40 && Location[rn2] == 15)
		c = 2;
	else if (Location[rn1] == 60 && Location[rn2] == 15)
		c = 3;
	return c;
}
int* Location() {
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
int MoleToCatch(int *a){
	int touch = 0;
	int count = 0;
	KeepHole();
	cin >> touch;
	if (touch == *a) {
		count = 11;
		return count;
	}
	else {
		count = 12;
		return count;
	}
}
void PrintResult(int *score, int *count) {
	if (*score == 11) {
		*count += 100;
		gotoxy(40, 19);
		cout << "���� : " << *count << "��";
	}
	else if (*score == 12) {
		*count -= 100;
		gotoxy(40, 19);
		cout << "���� : " << *count << "��";
	}
}
int main()
{
	int sec = 3;
	int count = 0;
	srand((unsigned)time(NULL));
	setcolor(10, 0);                //10 :�ʷ�

									//���� ���� �� ȭ��
	gotoxy(18, 3);
	cout << "��������������������������������������������" << endl;
	gotoxy(18, 4);
	cout << "��                                        ��" << endl;
	gotoxy(18, 5);
	cout << "��            �δ��� ������             ��" << endl;
	gotoxy(18, 6);
	cout << "��                                        ��" << endl;
	gotoxy(18, 7);
	cout << "��         �ƹ�Ű�� ������ ����!          ��" << endl;
	gotoxy(18, 8);
	cout << "��        ���� ����Ű :  1~9 ��Ű         ��" << endl;
	gotoxy(18, 9);
	cout << "��                                        ��" << endl;
	gotoxy(18, 10);
	cout << "��������������������������������������������" << endl;

	_getch();
	system("cls");

	//���� ��� ȭ��

	for (int i = 0; i < 3; i++) // ���� 5�� ���
	{
		setcolor(10, 0);                //10 :�ʷ�
		gotoxy(5, 5);
		cout << sec << "���Ŀ� �����մϴ�" << endl;
		sec--;
		Sleep(1000);
	}
	system("cls");
	//���� ���� ȭ��

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