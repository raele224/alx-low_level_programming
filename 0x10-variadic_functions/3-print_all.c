#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything that is  based on the format
 * @format: List of types of arguments passed to the function
 *
 * Description: c: char, b: integer, f: float, s: char * (if NULL, print (nil))
 * Any other char is ignored
 * Prints a new line at the end of the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int b = 0;
	char *str;

	va_start(args, format);

	while (format && format[b])
	{
		switch (format[b])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'b':
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
				b++;
				continue;
		}

		if (format[b + 1])
			printf(", ");

		b++;
	}

	printf("\n");

	va_end(args);
}
