#ifndef DOG_H
#define DOG_H

/**
 *struct dog - Represents a dog.
 *@name: Name of the dog (string).
 *@age: Age of the dog (floating-point number).
 *@owner: Name of the dog's owner (string).
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
