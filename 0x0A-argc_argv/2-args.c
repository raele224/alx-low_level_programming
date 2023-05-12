#include <stdio.h>
/**
 * main - Prints all arguments received
 * @argc: The number of arguments
 * @argv: Arrays of arguments
 *
 * Return : Always 0
 */

int main(int argc, char *argv[])
{
	int i;


	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
