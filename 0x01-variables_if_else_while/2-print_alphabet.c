#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabets;

	alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets += 1;
	}
	putchar('\n');
	return (0);
}
