#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates the memory for an array and initializes it to 0
 * @nmemb: Number of elements in the array
 * @size: Size of an element in bytes
 *
 * Return: Pointer to the allocated memory
 *         If nmemb or size is 0, or if malloc fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned char *mem;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	mem = ptr;

	for (a = 0; a < total_size; a++)
		mem[a] = 0;

	return (ptr);
}
