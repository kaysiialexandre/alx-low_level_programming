#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("The size of a char is: %ld bytes\n", sizeof(char));
	printf("The size of an int is: %ld bytes\n", sizeof(int));
	printf("The size of a long int is: %ld bytes\n", sizeof(long int));
	printf("Size of a long long int is: %ld bytes\n", sizeof(long long int));
	printf("The size of float is: %ld bytes\n", sizeof(float));
	return (0);
}
