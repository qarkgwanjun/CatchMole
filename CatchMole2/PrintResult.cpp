#include "main.h"

int PrintResult(int *Score1, int* count, int* last)
{
	if (*Score1 == 11) {
		*count += 100;
		*last += 100;
		gotoxy(40, 19);
		cout << "���� : " << *count << "��";
	}
	else if (*Score1 == 12) {
		*count -= 100;
		*last += 100;
		gotoxy(40, 19);
		cout << "���� : " << *count << "��";
	}
	if (*last == 1000) {
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
	}
	return *last;
}