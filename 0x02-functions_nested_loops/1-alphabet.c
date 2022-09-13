#include "main.h"
/**
 * print_alphabet - prints all lowercase alphabets using
 * _putchar
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
