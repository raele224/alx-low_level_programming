#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Represents a dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the dog's owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(const dog_t *d);

#endif /* DOG_H */


