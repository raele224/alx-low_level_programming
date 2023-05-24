#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array that will iterate over.
 * @size: Array's size.
 * @action: Pointer to the function that will be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
	size_t i;

		for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
