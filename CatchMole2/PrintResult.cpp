#include "main.h"

int PrintResult(int *Score1, int* count, int* last)
{
	if (*Score1 == 1) {
		*count += 100;
		*last ++;
		gotoxy(40, 19);
		cout << "���� : " << *count << "��";
	}
	else if (*Score1 == 2) {
		*count -= 100;
		*last ++;
		gotoxy(40, 19);
		cout << "���� : " << *count << "��";
	}
	if (*last == 10) {
		system("cls");
		setcolor(10, 0);

		gotoxy(18, 3);
		cout << "��������������������������������������������" << endl;
		gotoxy(18, 4);
		cout << "��                                        ��" << endl;
		gotoxy(18, 5);
		cout << "��            �δ��� ������             ��" << endl;
		gotoxy(18, 6);
		cout << "��                                        ��" << endl;
		gotoxy(18, 7);
		cout << "��          ������ ����Ǿ����ϴ�.        ��" << endl;
		gotoxy(18, 8);
		cout << "��            �÷��̾� : " << *count << " ��" << "           ��" << endl;
		gotoxy(18, 9);
		cout << "��                                        ��" << endl;
		gotoxy(18, 10);
		cout << "��������������������������������������������" << endl;
		Sleep(2000);
	}
	return *last;
}