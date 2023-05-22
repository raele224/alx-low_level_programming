#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents dog.
 * @name: Dog's name.
 * @age:Dog's age.
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

