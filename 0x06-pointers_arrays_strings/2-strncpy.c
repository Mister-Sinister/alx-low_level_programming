#include "main.h"
/**
 * _strncpy - copies a string
 * @src: the source of the string
 * @dest: the destination string
 * @n: number of bytes to be copied
 * Return: the copied string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}

	return (dest);
}
