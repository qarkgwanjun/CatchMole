#pragma once
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <Time.h>
#include <conio.h>

#define TRUE 1
using namespace std;
void StartMoleGame();
void gotoxy(int x, int y);
void setcolor(int color, int bgcolor);
void KeepHole();
int MoveMole(int *Location);
int* Location();
int CatchMole(int *a);
int PrintResult(int *score, int *count, int *last);


