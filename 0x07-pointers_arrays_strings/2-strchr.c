#include "main.h"
/**
 * _strchr - checks if a character exists in a string
 * @s: the string
 * @c: the character
 * Return: c is the character is present, otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s[i]);
	}
	return (NULL);
}
