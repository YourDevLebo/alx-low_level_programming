#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * output - 0123456789abcdef
 * function - use putchar 3 times only
 * Return: 0
 */
int main(void)
{
	int nums;
	char alpha;

	for (nums = 48; nums < 58; nums++)
	{
		putchar(nums);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
