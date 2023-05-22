#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initializes a struct dog with the provided values.
 * @d: Pointer to the struct dog to initialize.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Name of the dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
