#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

/**
 * print_alphabet prints all lowercase alphabets using
 * _putchar
 */
void print_alphabet(void)
{
        char c;
        for (c = 97; c < 123; c++)
        {
                _putchar(c);
        }
        _putchar('\n');
}
