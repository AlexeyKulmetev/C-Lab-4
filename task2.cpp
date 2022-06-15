#include "task2.h"
#include <stdio.h>

#define M 512

char* reverseWords(char* in, char* out) {
	char* pArray[M];
	int i = 0;
	int pIndex = 0;

	while (in[i] != '\0') {
		if (in[i] >= 'A' && in[i] <= 'Z' || in[i] >= 'a' && in[i] <= 'z') {
			pArray[pIndex++] = &in[i];
			while (in[i] >= 'A' && in[i] <= 'Z' || in[i] >= 'a' && in[i] <= 'z')
				i++;
		}
		else
			i++;
	}

	printf("\n");


	char* tmpPointer = NULL;
	int strIndex = 0;
	int wordIndex = 0;
	 // Записываем в out перевернутую строку
	for (i = pIndex - 1; i >= 0; i--) {		
		printf(" %c", *pArray[i]);   // Распечатать символы на которые указывает массив указателей
		tmpPointer = pArray[i];
		wordIndex = 0;
		while (tmpPointer[wordIndex] != ' ' && tmpPointer[wordIndex] != '\0' && tmpPointer[wordIndex] != '\n') {
			out[strIndex] = tmpPointer[wordIndex];
			strIndex++;
			wordIndex++;
		}
		out[strIndex++] = ' ';
	}
	out[strIndex] = '\0';

	return out;
}