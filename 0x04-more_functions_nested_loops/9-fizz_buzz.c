#include <stdio.h>
/**
 * main - prints numbers from 1 - 100, Fizz for numbers
 * divisible by 3, Buzz for numbers divisible by 5, FizzBuzz for
 * numbers divisible by 3 and 5
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 1)
		{
			printf("%d", i);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
