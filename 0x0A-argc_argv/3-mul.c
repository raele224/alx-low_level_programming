#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: The number of arguments passed
 * @argv: An array of pointers to the arguments
 *
 * Return: 0  on success, 1 if arguments are not provided
 */

int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 3)
{
	printf("Error\n");
	return (1);
}

x = atoi(argv[1]);
y = atoi(argv[2]);
z = x *y;

printf("%d\n", z);
return (0);
}
