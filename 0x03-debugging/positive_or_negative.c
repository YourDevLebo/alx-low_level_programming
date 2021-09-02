#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - it will assign random number to (n)
 * @i: checks the number
 * condition1 - if n > 0 = is_positive
 * condition2 - if n == 0 = is_zero
 * condition3 - if n < 0 = is_negative
 * Return: 0
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
}

