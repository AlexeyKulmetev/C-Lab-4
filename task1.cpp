#include "task1.h"
#include <stdio.h>

#define N 100

char *pointer;
int i = 0;
int j = 0;
int tmpLength = 0;
int tmpIndex = 0;
int tmpInt;
char *tmpPointer = NULL;
int arrayLengths[N] = {};

void lineSort(char *str[], int size) {

	// «апись в массив arrayLengths длин строк
	for (i = 0; i < size; i++) {
		pointer = str[i];
		for (j = 0; pointer[j] != '\0'; j++) {
			tmpLength++;
		}
		arrayLengths[i] = tmpLength;
		tmpLength = 0;
	}
	// —ортировка массива arrayLengths, параллельно с ней сортировка массива указателей
	// —ортировка методом вставки
	for (i = 1; i < size; i++) {
		tmpIndex = i;
		while (tmpIndex > 0 && arrayLengths[tmpIndex] < arrayLengths[tmpIndex - 1]) {
			tmpInt = arrayLengths[tmpIndex];
			tmpPointer = str[tmpIndex];

			arrayLengths[tmpIndex] = arrayLengths[tmpIndex - 1];
			str[tmpIndex] = str[tmpIndex - 1];

			arrayLengths[tmpIndex - 1] = tmpInt;
			str[tmpIndex - 1] = tmpPointer;
			tmpIndex--;
		}
	}
}

void printLines(const char *str[], int size) {
	const char* pointer = NULL;

	for (int i = 0; i < size; i++) {
		pointer = str[i];

		for (int j = 0; pointer[j] != '\0'; j++) {
			printf("%c", pointer[j]);
		}

		printf("\n");
	}
}

