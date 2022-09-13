#include "main.h"

/**
 * print_alphabet_x10 - prints all lowercase alphabets followed by a new line
 * 10 times
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 97; c < 123; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
