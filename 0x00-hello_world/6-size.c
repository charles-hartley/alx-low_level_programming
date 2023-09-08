#include <stdio.h>
/**
 * main - the main function
 *
 * Return: returns 0 after program executes
 */

int main(void)
{
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
