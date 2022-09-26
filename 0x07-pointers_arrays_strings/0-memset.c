#include "main.h"
/**
 * _memset - fills a pointer with a number of bytes in memory
 * @s: the pointer
 * @b: the character to write
 * @n: the number of bytes to write
 * Return: A pointer to the pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	char **ps;

	ps = &s;

	return (ps);

}
