#include "main.h"
/**
 * string_toupper - changes all the letters of a string to upper case
 * @s: the string tp be upper cased
 * Return: The upper string (s)
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
