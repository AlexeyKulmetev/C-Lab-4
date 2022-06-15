#include "task3.h"


int isPalindrome(char* str) {

	char* endPointer;
	int flag = 1;
	int strLength = 0;
	int halfStrLength = 0;

	for (int i = 0; str[i] != '\0'; i++)
		strLength++;

	endPointer = &str[strLength - 2];
	halfStrLength = (strLength - 1) / 2;

	
	for (int i = 0; i <= halfStrLength; i++) {

		if (str[i] != *endPointer - i) {
			flag = 0;
			break;
		}
	}
	return flag;
}