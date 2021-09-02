#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit in 0 to 9
 * @c: checks the digit
 * Return: 0 ifnot digit else 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
