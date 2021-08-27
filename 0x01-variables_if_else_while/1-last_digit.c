#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit of (n)
 * condition1 - if last_digit of n > 5 :string = and is greater > 5
 * condition2 - if last_digit of n = 0 :string = and is 0
 * condition3 - if last_digit of n < 6 != 0 :string = and less than 6 not 0
 *  Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
