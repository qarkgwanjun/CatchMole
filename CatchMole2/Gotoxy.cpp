#include "main.h"

void gotoxy(int x, int y) {// �ܼ� ȭ�� Ŀ�� �̵�
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}