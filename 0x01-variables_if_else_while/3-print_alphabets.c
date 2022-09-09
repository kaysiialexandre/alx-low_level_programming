#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char alphABETS;

	alphABETS = 'a';

	while (alphABETS <= 'z')
	{
		putchar(alphABETS);
		alphABETS += 1;
	}
	alphABETS = 'A';
	while (alphABETS <= 'Z')
	{
		putchar(alphABETS);
		alphABETS += 1;
	}
	putchar('\n');
	return (0);
}
