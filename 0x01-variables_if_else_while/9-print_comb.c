#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * output - 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 * function - use putchar more than 4 times maximum
 * Return: 0
 */
int main(void)
{
	int nums;

	for (nums = 48; nums < 58; nums++)
	{
		putchar(nums);
		if (nums != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
