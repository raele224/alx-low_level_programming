#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings then followed by a new line
 * @separator: The string will be printed between the strings
 * @n: The number of strings that will be passed to the function
 *
 * Description: If separator is NULL, do not print it
 * If one of the strings is NULL, print (nil) instead
 * Print a new line at the end of the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	char *str;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
