#include <stdio.h>
/**
 * main - prints all numbers from 0 - 9 as chars
 * Return: Always 0 (success)
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
