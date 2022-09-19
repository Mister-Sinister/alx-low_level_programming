#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 */

void rev_string(char *s)
{
	int i, j;

	char temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		temp = s[j];
		s[i - j] = temp;
	}
}
