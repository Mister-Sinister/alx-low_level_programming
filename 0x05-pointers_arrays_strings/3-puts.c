#include "main.h"
/**
 * _puts - prints characters to stdout plus a newline
 * @str: the string to print
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
