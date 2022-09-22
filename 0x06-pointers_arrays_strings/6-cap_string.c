#include "main.h"
/**
 * cap_string - capitalizes the first letter of every word in a string
 * @s: the string to be passed
 * Return: the capitalized string (s)
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}

	i = 1;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' && s[i + 1] >= 97 && s[i + 1] <= 122)
		{
			s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}
	return (s);
}
