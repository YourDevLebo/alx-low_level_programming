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
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
