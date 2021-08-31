#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alp_c = 'a';

		while (alp_c < 'z')
		{
			_putchar(alp_c);
			alp_c++;
		}
		_putchar('\n');
		i++;
	}
}
