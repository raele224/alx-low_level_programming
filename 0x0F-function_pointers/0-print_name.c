#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Write a function that print a name.
 *@name: The name that needs to be printed
 *@f: A pointer that point a funtion that wiil print character.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		while (*name != '\0')
	{
		f(name);
		name++;
	}
	}
}
