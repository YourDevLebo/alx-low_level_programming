#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * output - 00 01, 00 02, 00 03, ...
 * numbers should range from 0 to 99
 * 00 01 and 01 00 = same combination of 0 and 1
 * function - use putchar 8 times max
 * Return: 0
 */
int main(void)
{
	int d2_1, d2_2;

	for (d2_1 = 0; d2_1 < 100; d2_1++)
	{
		for (d2_2 = 0; d2_2 < 100; d2_2++)
		{
			if (d2_1 < d2_2)
			{
				putchar((d2_1 / 10) + 48);
				putchar((d2_1 % 10) + 48);
				putchar(' ');
				putchar((d2_2 / 10) + 48);
				putchar((d2_2 % 10) + 48);
				if (d2_1 != 98 || d2_2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
