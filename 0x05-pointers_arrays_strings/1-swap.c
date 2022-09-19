#include "main.h"
/**
 * swap_int - swaps the values of two pointers
 * @a: the first pointer
 * @b: the second pointer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
