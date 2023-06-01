#include <stdio.h>
/**
 * pre_main - Function executed before main
 *
 * Description: This function prints a message
 * before the main function is executed.
 */
void __attribute__((constructor)) pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
/**
 * main2 - Entry point for the second part of the program.
 *
 *Description: This function prints a specific message.
 * Return: Always 0.
 */
int main2(void)
{
	return (0);
}
