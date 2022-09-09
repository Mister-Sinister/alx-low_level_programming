#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * in lowercase
 * Return: Always 0 (succes)
 */

int main(void)
{
	int n;

	for (n = 0; n < 0xff; n++)
	{
		putchar("%c", (char) n);
	}
	putchar("\n");
	return (0);
}
