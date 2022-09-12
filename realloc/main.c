#include <stdio.h>
#include <stdlib.h>

int main() {
	int *numbers = calloc(2, sizeof(int)); // same as malloc but initialized memory with 0
	if(numbers == NULL) exit(EXIT_FAILURE);
	*(numbers) = 12;
	*(numbers+1) = 13;
	printf("\nnumbers[0]: %d", numbers[0]);
	printf("\nnumbers[1]: %d", numbers[1]);

	// reallocating
	numbers = realloc(numbers, 2 * sizeof(int));
	numbers[2] = 14;
	numbers[3] = 15;
	printf("\nAfter relloac");
	printf("\nnumbers[2]: %d", *(numbers+2));
	printf("\nnumber[3]: %d", *(numbers+3));

	free(numbers);
}