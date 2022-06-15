#include <stdio.h>
#include <conio.h>
#include "task4.h"

const int N = 1023;
const int M = 100;

int main() {

	FILE* file;
	char buff[N][M];
	char* str[N];
	int i = 0;
	int size = 0;

	file = fopen("C:/Users/pervo/source/repos/C-Lab4-(task4)/C-Lab4-(task4)/Text.txt", "r+");

	while (fgets(buff[i], M, file) != NULL) {
		str[i] = buff[i];
		i++;
		size++;
	}

	lineSort(str, size);

	i = 0;
	while (i < size) {
		printf("%s", str[i]);
		i++;
	}

	_getch();

	return 0;
}