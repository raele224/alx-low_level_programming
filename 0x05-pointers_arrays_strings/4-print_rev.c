#include "main.h"

/**
 * print_rev - Prints a string in reverse order, followed by a new line
 * @s: A pointer to a character string
 */
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the characters of the string in reverse order */
	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}

	_putchar('\n');
}
