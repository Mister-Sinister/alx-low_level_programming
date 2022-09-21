#include "main.h"
/**
 * _strcat - appends one string to another
 * @src: the string to append
 * @dest: the string to be appended to
 * Return: The concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *buffer;

	buffer = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (buffer);
}
