#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates the  memory using malloc
 * @b: Size of the memory to allocate
 *
 * Return: Pointer to the allocated memory
 *         If malloc fails,then the program terminates
 *         with a status value of 98
 */
void *malloc_checked(unsigned int b)
{

	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
