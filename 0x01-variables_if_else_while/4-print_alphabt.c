#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * output - prints letters except q and e
 * function - use putchar twice only
 * Return: 0
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'e' && lowercase != 'q')
		{
			putchar(lowercase);
		}
		lowercase++;
	}
	putchar('\n');
	return (0);
}
