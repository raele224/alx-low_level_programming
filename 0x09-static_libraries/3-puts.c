#include "main.h"

/**
 * _puts - Prints a string to the standard output, followed by a new line
 * @str: A pointer to a character string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
