#include "main.h"
/**
 * print_diagonal - prints the '\' character
 * @n: is the number of times the '\' character should be printed
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}