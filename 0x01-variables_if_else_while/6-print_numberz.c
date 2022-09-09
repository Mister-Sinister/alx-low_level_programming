#include <stdio.h>
/**
 * main - prints all numbers from 0 - 9 as chars
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((char) n);
	}
	putchar('\n');
	return (0);
}
