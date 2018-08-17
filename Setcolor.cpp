#include "main.h"

void setcolor(int color, int bgcolor) {//콘솔 화면 글자 색 변경
	color &= 0xf;
	bgcolor &= 0xf;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}