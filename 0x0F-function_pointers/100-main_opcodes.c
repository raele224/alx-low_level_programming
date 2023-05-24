#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function.
 * @argc: Number of arguments.
 * @argv: An array of string arguments.
 *
 * Return: 0 on success, or an error code on error.
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
	printf("Error\n");
	return (2);
	}

	unsigned char *ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	printf("%02x ", *(ptr + i));

	printf("\n");

	return (0);
}
