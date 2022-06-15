#include <conio.h.>
#include <stdlib.h>
#include <stdio.h>
#include "task1.h"

#define M 1000	// длина строки
#define N 100	// количество строк

int main() {

	char buff[N][M] = {};
	char* str[N];	// Массив указателей

	const char* constArray[N];
	int i = 0;
	int j = 0;
	int tmpLength = 0;
	int size = 0;

	printf("Put no more than %d lines and than press 'Enter':\n", N);

	// Считываем строки до появления пустой строки
	// В этом же цикле присваиваем массиву указателей адреса считываемых строк
	// Считаем количество строк
	while (*gets_s(buff[i]) != '\0') {
		str[i] = buff[i];
		size++;
		i++;
	}
	printf("\n\n");

	lineSort(str, size);
	
	// Присваиваем константному массиву указателей значение массива str
	for (int i = 0; i < size; i++)
		constArray[i] = str[i];

	printLines(constArray, size);

	_getch();
	return 0;
}