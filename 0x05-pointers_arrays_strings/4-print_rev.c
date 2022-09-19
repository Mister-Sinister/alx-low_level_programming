#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the pointer to the string to reverse
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	while ((i - 1) > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
