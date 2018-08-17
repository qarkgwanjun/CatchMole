#include "main.h"

void gotoxy(int x, int y) {// 콘솔 화면 커서 이동
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}