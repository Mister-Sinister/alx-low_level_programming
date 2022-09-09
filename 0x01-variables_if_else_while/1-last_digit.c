#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - find the last digit of n and prints whether it is larger
 * than 5, 0 or less than 6
 * the last digit is stored in the variable last_digit
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit;

	last_digit = (n % 10);
	printf("Last digit of %d is %d", n, (n % 10));
	if (last_digit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
