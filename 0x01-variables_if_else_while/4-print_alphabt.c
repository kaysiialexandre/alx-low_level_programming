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

	for (alphabts = 'a'; alphabts <= 'z'; alphabts++)
	{

		if (alphabts == 'q' || alphabts == 'e')
		{
			continue;
		}
		putchar(alphabts);
	}
	putchar('\n');
	return (0);
}
