#include "main.h"

int MoveMole(int *Location) {
	int rn1 = rand() % 3;
	int rn2 = rand() % 3 + 3;
	int c = 0;
	gotoxy(Location[rn1], Location[rn2]);
	cout << " |0 nn 0|" << endl;

	if (Location[rn1] == 20 && Location[rn2] == 9)
		c = 7;
	else if (Location[rn1] == 40 && Location[rn2] == 9)
		c = 8;
	else if (Location[rn1] == 60 && Location[rn2] == 9)
		c = 9;
	else if (Location[rn1] == 20 && Location[rn2] == 12)
		c = 4;
	else if (Location[rn1] == 40 && Location[rn2] == 12)
		c = 5;
	else if (Location[rn1] == 60 && Location[rn2] == 12)
		c = 6;
	else if (Location[rn1] == 20 && Location[rn2] == 15)
		c = 1;
	else if (Location[rn1] == 40 && Location[rn2] == 15)
		c = 2;
	else if (Location[rn1] == 60 && Location[rn2] == 15)
		c = 3;
	return c;
}