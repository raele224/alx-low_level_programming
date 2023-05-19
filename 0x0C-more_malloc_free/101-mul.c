#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: The product of num1 and num2
 */
int multiply(int num1, int num2);

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	/* Convert arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Check if arguments are valid positive numbers */
	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}

/**
 * multiply - Multiplies two numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: The product of num1 and num2
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
