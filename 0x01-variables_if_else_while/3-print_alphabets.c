#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * function - use putchar 3 times only
 * Return: 0
 */
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
