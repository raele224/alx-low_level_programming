#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selects the right function to perform the operation.
 * @s: The operator that is  passed as an argument.
 *
 * Return: Pointer to the corresponding function, or
 * NULL if operator is not found.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
	if (*(ops[i].op) == *s)
	return (ops[i].f);
		i++;
	}

	return (NULL);
}

