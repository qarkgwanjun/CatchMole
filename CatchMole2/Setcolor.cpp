#include "main.h"

void setcolor(int color, int bgcolor) {//�ܼ� ȭ�� ���� �� ����
	color &= 0xf;
	bgcolor &= 0xf;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}