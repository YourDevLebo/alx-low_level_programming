#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * function - use putchar 3 times only
 * Return: 0
 */
int main(void)
{
	char lower_and_upper;

	for (lower_and_upper = 'a'; lower_and_upper <= 'z'; lower_and_upper++)
		putchar(lower_and_upper);
	for (lower_and_upper = 'A'; lower_and_upper <= 'Z'; lower_and_upper++)
		putchar(lower_and_upper);
	putchar('\n');
	return (0);
}
