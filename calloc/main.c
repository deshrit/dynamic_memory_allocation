#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int *numbers = calloc(2, sizeof(int)); // same as malloc but initialized memory with 0
	if(numbers == NULL) exit(EXIT_FAILURE);
	*(numbers) = 12;
	*(numbers+1) = 13;
	// *(numbers+2) = 14;

	printf("\nnumbers[0]: %d", numbers[0]);
	printf("\nnumbers[1]: %d", numbers[1]);
	// printf("\nnumbers[2]: %d", numbers[2]);

	free(numbers);
}

