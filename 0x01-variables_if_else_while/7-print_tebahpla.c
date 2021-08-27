#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 * output - zyxwvutsrqponmlkjihgfedcba
 * function - use putchar twice only
 * Return: 0
 */
int main(void)
{
	char lower_rev;

	for (lower_rev = 'z'; lower_rev >= 'a'; lower_rev--)
	{
		putchar(lower_rev);
	}
	putchar('\n');
	return (0);

}

