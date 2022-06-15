#include <stdio.h>


const int N = 128;
const int M = 100;

int main() {

	int relativesAmount = 0;
	char namesArray[N][M];
	char* young = NULL;
	char* old = NULL;
	int currentAge = 0;
	int maxAge = 0;
	int minAge = 200;

	printf("Enter number of your relatives: ");
	scanf("%d", &relativesAmount);

	for (int i = 0; i < relativesAmount; i++) {

		printf("Enter name of your relative: ");
		scanf("%s", namesArray[i]);

	}
	for (int i = 0; i < relativesAmount; i++) {
		printf("\nEnter age of %s: ", namesArray[i]);
		scanf("%d", &currentAge);
		if (currentAge > maxAge) {
			maxAge = currentAge;
			old = namesArray[i];
		}
		else if (currentAge < minAge) {
			minAge = currentAge;
			young = namesArray[i];
		}
	}

	printf("\nThe oldest relative - %s", old);
	printf("\nThe younges relative - %s", young);

	return 0;
}