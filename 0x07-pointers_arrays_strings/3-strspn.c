#include "main.h"
/**
 * _strspn - checks for the occurence of a substring in the first part
 * of another
 * @s: the string
 * @accept: the sub-string
 * Return: check is the number of occurences
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, check;

	check = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (accept[i] == s[j])
			{
				check++;
			}
		}
	}

	return (check);
}
