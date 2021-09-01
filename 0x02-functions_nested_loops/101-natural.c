#include <stdio.h>

/**
 * main - prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	unsigned long int m3, m5, msum;
	int i;

	m3 = 0;
	m5 = 0;
	msum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			m3 = m3 + i;
		} else if ((i % 5) == 0)
		{
			m5 = m5 + i;
		}
	}
	msum = m3 + m5;
	printf("%lu\n", sum);
	return (0);
}
