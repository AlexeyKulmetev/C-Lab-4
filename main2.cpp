#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include "task2.h"



#define N 1024 //length of line

int main() {

	char str[N]; // Text entry string
	char reversStr[N];

	printf("Enter text: ");

	fgets(str, N, stdin);


	
	reverseWords(str, reversStr);

	printf("\n");
	for (int i = 0; reversStr[i + 1] != '\0' && reversStr[i] != '\0'; i++)
		printf("%c", reversStr[i]);


	_getch();
}