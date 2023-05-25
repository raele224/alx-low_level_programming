#include <stdarg.h>

/**
 * sum_them_all - Returns sum of all the parameters.
 * @n: Number of parameters.
 *
 * Return: The sum of the parameters, or 0 if @n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
