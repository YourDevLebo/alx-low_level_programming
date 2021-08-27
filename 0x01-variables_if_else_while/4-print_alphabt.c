#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * output - prints letters except q and e
 * function - use putchar twice only
 * Return: 0
 */
int main(void)
{
	char lowercase;

	while (lowercase <= 'a')
	{
		if (lowercase != 'e' && != 'q')
		{
			putchar(lowercase);
		}
		lowercase++
	}
	putchar('\n');
	return (0);
}
