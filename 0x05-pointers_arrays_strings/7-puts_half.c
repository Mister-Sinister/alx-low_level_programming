#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the pointer of the string
 */

void puts_half(char *str)
{
	int i, j, len;

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
	else if (len % 2 != 0)
	{
		j = (len - 1) / 2;
		while (j < len - 1)
		{
			_putchar(str[j + 1]);
			j++;
		}
	}
	_putchar('\n');
}
