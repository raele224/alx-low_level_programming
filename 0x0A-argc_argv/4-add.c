#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char **argv)
{
	int x, y, sum = 0;
	char *arg;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (x = 1; x < argc; x++)
	{
	arg = argv[x];

	for (y = 0; arg[y] != '\0'; y++)
	{
	if (!isdigit(arg[y]))
		{
		printf("Error\n");
		return (1);
		}
	}

	sum += atoi(arg);
}

printf("%d\n", sum);
return (0);
}
