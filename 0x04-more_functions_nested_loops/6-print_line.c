#include "main.h"
/**
 * print_line - prints the underscore character @n times if @n is greater
 * than 0, followed by a new line. Otherwise, a new line.
 * @n: is the number of times the underscore will be printed
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
