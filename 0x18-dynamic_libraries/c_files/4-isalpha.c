#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks alphabetic character
 * @c: the character to be checked
 * Return: 1 if is lowercase or uppercase else 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
