#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if they are equal, 1 if s1 > s2 and -1 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{

	int n, i, check;

	n = 0;
	while (*s1 != '\0' && *s2 != '\0')
	{
		n++;
	}

	check = 0;
	for (i = 0; i < n; i++)
	{
		if (s1[i] == s2[i])
		{
			check++;
		}
	}

	if ((check == n) && (sizeof(s1) == sizeof(s2)))
	{
		return (0);
	}
	else if (sizeof(s1) > sizeof(s2))
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
