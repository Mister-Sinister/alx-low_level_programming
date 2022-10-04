#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c);
{
	if (size == 0)
		return NULL;

	char *s;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (0);

	s[0] = c;

	return (s);
}
