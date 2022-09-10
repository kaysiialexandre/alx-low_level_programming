#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int alphabts;

	alphabts = 'a';

	while (alphabts <= 'z')
	{
		if (alphabts == 'q' || alphabts == 'e')
		{
			continue;
		}
		putchar(alphabts);
		alphabts += 1;
	}
	putchar('\n');
	return (0);
}
