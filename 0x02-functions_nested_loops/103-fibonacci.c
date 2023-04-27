#include <stdio.h>

/**
 * main - prints the sum of even-valued Fibonacci
 * sequence terms up to 4,000,000
 *
 * Return: 0 on success
 */
int main(void)
{
	int term1 = 1, term2 = 2, next = 0, sum = 2;

	while (next <= 4000000)
	{
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		if (next % 2 == 0 && next <= 4000000)
			sum += next;
	}
	printf("%d\n", sum);
	return (0);
}
