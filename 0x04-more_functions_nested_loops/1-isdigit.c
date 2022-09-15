#include "main.h"
/**
 * _isdigit - checks if c is a digit between 0 and 9
 * @c: the digit to be checked
 * Return - 1 is c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
