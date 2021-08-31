#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c lowercase else 0
 */
int _islower(int c)
{

	if (islower(c))
	{
		_putchar(49);
	}
	else
	{
		_putchar(48);
	}
	_putchar('\n');
	return (0);
}
