#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 * Return:
 */
void print_alphabet_x10(void)
{
	char i;
	char k;

	for (i = 0; i < 10; i++)
	{
		{
			for (k = 'a'; k <= 'z'; k++)
				_putchar(k);
		}
		_putchar('\n');
	}
}
