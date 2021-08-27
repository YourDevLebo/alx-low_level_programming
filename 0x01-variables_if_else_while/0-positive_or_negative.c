#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - it will assign random number to (n)
 * condition1 - if n > 0 = is_positive
 * condition2 - if n == 0 = is_zero
 * condition3 - if n < 0 = is_negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is_positive\n", n);
	else if (n == 0)
		printf("%d is_zero\n", n);
	else if (n < 0)
		printf("%d is_negative\n", n);
	return (0);
}

