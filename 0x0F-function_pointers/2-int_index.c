#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - Searcheing for integer in an array.
 * @array:Array to search in.
 * @size:Number of elements in the array.
 * @cmp: Pointer to the function that was used to compare values.
 *
 * Return: Index of first element in which cmp function does not return 0,
 *         or -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	}

	return (-1);
}
