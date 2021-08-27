#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 * output - 0123456789
 * Return: 0
 */
int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
		printf("%d", nums);
	printf("\n");
	return (0);
}
