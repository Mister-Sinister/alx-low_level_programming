#include <stdio.h>

/**
 * main - prints comninations of single-digit
 * numbers separated by a ','
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((char) n);
		putchar(',');
	}
	return (0);
}
