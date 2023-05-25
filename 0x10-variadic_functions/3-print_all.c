#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @args: The va_list that contains the character to be printed.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @args: The va_list that contains the integer to be printed.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: The va_list that contains the float to be printed.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: The va_list that contains the string to be printed.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints anything.
 * @format: The format string that specifies the types of arguments.
 *            c: char
 *            j: integer
 *            f: float
 *            s: char * (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int j = 0;
	void (*print_func)(va_list);

	va_start(args, format);

	while (format && format[j])
	{
		print_func = NULL;

		switch (format[j])
		{
			case 'c':
				print_func = print_char;
				break;
			case 'j':
				print_func = print_int;
				break;
			case 'f':
				print_func = print_float;
				break;
			case 's':
				print_func = print_string;
				break;
		}

		if (print_func)
		{
			print_func(args);
			if (format[j + 1] != '\0')
				printf(", ");
		}

		j++;
	}

	printf("\n");

	va_end(args);
}
