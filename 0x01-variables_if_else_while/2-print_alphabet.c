#include <stdio.h>

/**
 * main - loops through all lowercase letters and
 * prints them character by character
 * newline at the end
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
