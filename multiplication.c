// C program to add two numbers
#include <stdio.h>

int main()
{
	int A, B, mult = 0;

	// Ask user to enter the two numbers
	printf("Multi of two numbers A and B : \n");

	// Read two numbers from the user || A = 2, B = 3
	scanf("%d%d", &A, &B);

	// Calculate the addition of A and B
	// using '+' operator
	mult = A * B;

	// Print the sum
	printf("Sum of A and B is: %d", mult);

	return 0;
}
