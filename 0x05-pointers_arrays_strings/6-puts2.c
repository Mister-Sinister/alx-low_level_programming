#include "main.h"
/**
 * puts2 - prints every other charcter of a string, followed
 * by a newline
 * @str: the string to be printed
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (i != '\0')
	{
		_putchar(s[i]);
		i += 2;
	}
	_putchar('\n');
}
