#include "main.h"

int MoleToCatch(int *a){
	int touch = 0;
	int count = 0;
	cin >> touch;
	if (touch == *a) {
		count = 11;
		return count;
	}
	else {
		count = 12;
		return count;
	}
}