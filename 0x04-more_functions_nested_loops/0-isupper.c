#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase
 * @c: for checking uppercase character
 * Return: 0 ifnot uppercase else 1
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
