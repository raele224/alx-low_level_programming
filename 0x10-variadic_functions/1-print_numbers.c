#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers,
 * followed by a new line.
 * @separator: The string that will be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * Description: If separator is NULL, do not print it.
 * Print new line at the end of the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
