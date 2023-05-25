#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the format
 * @format: A list of types of arguments that can be passed to the function
 *
 * Description: c: char, j: integer, f: float, s: char * (if NULL, print (nil))
 * Any other char is ignored
 * Prints a new line at the end of the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int j = 0;
	char *str;

	va_start(args, format);

	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'j':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				j++;
				continue;
		}

		if (format[j + 1])
		printf(", ");

		j++;
	}

	printf("\n");

	va_end(args);
}
