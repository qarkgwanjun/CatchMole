#include "main.h"


int main()
{
	int sec = 3;
	int count = 0;
	int last = 0;
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
		int* rn = Location();
		KeepHole();

		int IsMoleHead = MoveMole(rn);

		//MoleToCatch(&IsMoleHead);

		int Score = MoleToCatch(&IsMoleHead);

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
