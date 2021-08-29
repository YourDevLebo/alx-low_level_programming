#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * output - 012, 013, 014, 015, ...
 * 012, 120, 102, 021, 201, 210 = same combination of 0,1 an 2
 * function - use putchar 6 times max
 * Return: 0
 */
int main(void)
{
	int d1, d2, d3;

	for (d1 = 48; d1 = 58; d1++)
	{
		for (d2 = 49; d2 = 58; d2++)
		{
			for (d3 = 50; d3 < 58; d3++)
			{
				if (d3 > d2 && d2 > d1)
				{
					putchar(d1);
					putchar(d2);
					putchar(d3);
					if (d1 != 55 || d2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
