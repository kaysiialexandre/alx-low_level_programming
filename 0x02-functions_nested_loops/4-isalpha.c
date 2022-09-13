#include "main.h"

/**
 * _isalpha - checks for alphabets
 *
 * @c: character to be examined
 *
 * Return: return 1 if an alphabet and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);

	}
	return (0);
}
