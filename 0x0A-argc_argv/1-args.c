#include <stdio.h>

/**
 * Main - Entry point
 *
 * @argc: The number of command line arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
	{
		(void) argv; /* unused parameter */
		printf("%d\n", argc - 1);
		return (0);
	}
