#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * function - use putchar twice only
 * Return: 0
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
