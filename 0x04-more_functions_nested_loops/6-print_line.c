#include "main.h"

/**
 * print_line - draws a line in the terminal
 * @n: n of lines(_)
 */
void print_line(int n);
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; n++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
