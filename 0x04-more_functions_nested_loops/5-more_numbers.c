#include "main.h"
/**
 * more_numbers - prints numbers from 0 - 14, 10 times
 * prints a new line after
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int j;
		
		for (j = '0'; j <= '9'; j++)
		{
			_putchar(j);
		}
		for (j = '0'; j <= '5'; j++)
		{
			_putchar('1');

			if (j == '5')
			{
				j = '\n';
			}
			_putchar(j);
		}
	}
}
