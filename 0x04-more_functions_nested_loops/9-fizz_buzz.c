#include "main.h"
#include <stdio.h>

/**
 * main - prints 0 to 100
 * if i = % 3 -> fizz
 * elseif i = % 5 -> Buzz
 * elseif both are multpiles of 3 and 5 = FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int m3, m5;

		m3 = i % 3;
		m5 = i % 5;

		if (m3 == 0 && m5 != 0)
		{
			printf(" Fizz");
		} else if (m5 == 0 && m3 != 0)
		{
			printf(" Buzz");
		} else if (m3 == 0 && m5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
