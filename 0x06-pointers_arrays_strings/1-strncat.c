#include "main.h"
/**
 * _strcat - appends one string to another
 * @src: the string to append
 * @dest: the string to be appended to
 * @n: the number of bytes used
 * Return: The concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *buffer;

	buffer = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (buffer);

}
