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
	return 0;
}
