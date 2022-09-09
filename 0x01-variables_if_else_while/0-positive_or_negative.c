#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/** 
 * main - assigns a random number to int n
 * print the number and whether or not it is greater, less or equal to zero
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
