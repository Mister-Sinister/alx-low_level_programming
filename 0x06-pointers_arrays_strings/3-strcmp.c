#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if they are equal, 1 if s1 > s2 and -1 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int n, n2 greater, check;

	check = 0;
	n = 0;
	greater = 0;
	n2 = 0;
	while (*s2 != '\0')
	{
		n2++;
	}
	while (*s1 != '\0')
	{
		n++;
		if (*s1 == *s2)
		{
			check++;
		}
		else if (*s1 > *s2)
		{
			greater++;
		}

		s1++;
		s2++;
	}
	if (check == n)
	{
		return (0);
	}
	else if ((greater > 0) || (n > n2))
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
