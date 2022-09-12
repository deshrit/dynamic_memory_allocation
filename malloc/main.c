#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void for_single_integer() {
	int *p = malloc(1 * sizeof(int));
	*p = 123;
	printf("\np: %p", p);
	printf("\n&p: %p", &p);
	printf("\n*p: %d", *p);

	free(p);
}

int main() {

	// malloc(number_of_bytes) returns address of starting address of allocated memory
	char *name = malloc(8); // 8 is 8 bytes
	if(name == NULL) exit(EXIT_FAILURE);
	strcpy(name, "deshrit");
	printf("Name: %s", name);
	free(name); // Dynamically allocated memory must be freed


	// Another example
	for_single_integer();
}