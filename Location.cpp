#include "main.h"

int* Location() {
	// 입력받은 크기 만큼의 int의 배열을 만든다.
	void* ar1 = (int*)malloc(sizeof(int) * 6);
	int* ip1 = (int*)ar1;
	ip1[0] = 20;
	ip1[1] = 40;
	ip1[2] = 60;
	ip1[3] = 9;
	ip1[4] = 12;
	ip1[5] = 15;

	return ip1;
}