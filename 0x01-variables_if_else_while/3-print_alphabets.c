#include <stdio.h>
/**
 * main - prints all lower case letters followed
 * by upper case letters and a newline at the end
 * Return: Always 0 success
 */

int main(void)
{
	char lch;
	char uch;

	for (lch = 'a'; lch <= 'z'; lch++)
	{
		putchar(lch);
	}
	for (uch = 'A'; uch <= 'Z'; uch++)
	{
		putchar(uch);
	}
	putchar('\n');
	return (0);
}
