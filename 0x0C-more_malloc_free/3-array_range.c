#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Minimum value (inclusive)
 * @max: Maximum value (inclusive)
 *
 * Return: Pointer to the new array
 *         If min is grater than max
 *        or if malloc fails, returns NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, a;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		arr[a] = min++;

	return (arr);
}
