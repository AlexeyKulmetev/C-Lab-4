#include <conio.h.>
#include <stdlib.h>
#include <stdio.h>
#include "task1.h"

#define M 1000	// ����� ������
#define N 100	// ���������� �����

int main() {

	char buff[N][M] = {};
	char* str[N];	// ������ ����������

	const char* constArray[N];
	int i = 0;
	int j = 0;
	int tmpLength = 0;
	int size = 0;

	printf("Put no more than %d lines and than press 'Enter':\n", N);

	// ��������� ������ �� ��������� ������ ������
	// � ���� �� ����� ����������� ������� ���������� ������ ����������� �����
	// ������� ���������� �����
	while (*gets_s(buff[i]) != '\0') {
		str[i] = buff[i];
		size++;
		i++;
	}
	printf("\n\n");

	lineSort(str, size);
	
	// ����������� ������������ ������� ���������� �������� ������� str
	for (int i = 0; i < size; i++)
		constArray[i] = str[i];

	printLines(constArray, size);

	_getch();
	return 0;
}