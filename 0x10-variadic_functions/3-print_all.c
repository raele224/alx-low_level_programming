#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -Code that prints anything based on the format
 * @format: A list of types of arguments passed to the function
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
	int num;
	float fnum;

	va_start(args, format);

	while (format && format[j] && format[j + 1])
	{
		if (format[j] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (format[j] == 'j')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[j] == 'f')
		{
			fnum = va_arg(args, double);
			printf("%f", fnum);
		}
		else if (format[j] == 's')
		{
			str = va_arg(args, char *);
				if (str == NULL)
				str = "(nil)";
			printf("%s", str);
		}

		if (format[j + 1] != '\0' && (format[j] == 'c' || format[j] == 'j' ||
					format[j] == 'f' || format[j] == 's'))
			printf(", ");

		j++;
	}

	printf("\n");

	va_end(args);
}
