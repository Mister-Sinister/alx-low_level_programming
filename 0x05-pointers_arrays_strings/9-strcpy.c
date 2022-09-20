#include "main.h"
/**
 * _strcpy - copies a string from src into dest
 * @src: the source of the string
 * @dest: the destination
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *buffer;

	buffer = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*destination = '\0';

	return (buffer);
}
