#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
