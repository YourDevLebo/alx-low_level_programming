#include <stdio.h>

/*
 * main - prints all possible different combinations of two digits
 * output - 01, 02, 03, 04, ...
 * 01 and 10 = same combination of 0 and 1
 * numbers should be in ascending order with 2 digits
 * function - puthcar can be only used five times
 */
int main(void)
{
	int d1, d2;

	for (d1 = 48; d1 <= 58; d1++)
	{
		for (d2 = 48; d2 <= 58; d2++ )
		{
			if (d2 > d1)
			{
				putchar(d1);
				putchar(d2);
				if (d1 != 56 || d2 != 57 )
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
