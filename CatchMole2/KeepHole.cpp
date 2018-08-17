#include "main.h"

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