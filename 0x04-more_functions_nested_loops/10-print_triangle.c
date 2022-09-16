#include "main.h"
/**
 * print_triangle - prints a right sided triangle
 * @size: is the size of the triangle to be printed
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = -1; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
