#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 */

void rev_string(char *s)
{
	int i, j;

	char *start, *end, temp;

	start = s;
	end = s;

	i = 0;
	while (s[i] != '\0')
	{
		end++;
		i++;
	}
	i -= 1;
	end -= 1;

	for (j = 0; j < (i - 1) / 2; j++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
