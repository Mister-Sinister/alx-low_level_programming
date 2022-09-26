#include "main.h"
/**
 * _memcpy - copies bytes from src to dest
 * @src: the pointer to source of the bytes
 * @dest: the pointer to destination
 * @n: number of bytes to copy
 * Return: pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
