#include "main.h"
#include <stdio.h>
/**
 * _strchr - checks if a character exists in a string
 * @s: the string
 * @c: the character
 * Return: c is the character is present, otherwise NULL
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
