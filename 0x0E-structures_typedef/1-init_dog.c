#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: the dogs's pointer
 * @name: the dogs's name
 * @age: the dogs's age
 * @owner: the owner's name
 *
 * Returns: void
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

