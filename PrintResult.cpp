#include "main.h"

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