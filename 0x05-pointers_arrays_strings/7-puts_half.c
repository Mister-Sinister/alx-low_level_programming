#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the pointer of the string
 */

void puts_half(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		i = len / 2;
		while (i < len - 1)
		{
			_puchar(str[i]);
			i++;
		}
	}
	_putchar('\0');
}
