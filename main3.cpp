#include <stdio.h>
#include <stdlib.h>
#include "task3.h"
#include <string.h>
#include <conio.h>

const int maxLength = 512;

int main() {

	char str[maxLength];
	int strLength = 0;

	printf("Enter line to check:  ");
	fgets(str, maxLength, stdin);

	if (isPalindrome(str))
		printf("\nYour string is a palindrome");
	else
		printf("\nYour string is not a palindrome");

	_getch();
}