#include "main.h"
/**
 * print_numbers - prints all numbers from 0 to 9
 * prints a newline after
 */

void print_numbers(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
