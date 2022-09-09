#include <stdio.h>

/**
 * main - prints comninations of single-digit
 * numbers separated by a ','
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
