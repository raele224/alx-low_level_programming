#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog.
 * @d: Pointer that frees the dog.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	/* Free the name and owner strings */
	free(d->name);
	free(d->owner);

	/* Free the dog structure */
	free(d);
	}
}
