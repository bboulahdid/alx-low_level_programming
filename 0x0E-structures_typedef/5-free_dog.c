#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 *
 * @d: the dog to be freed
 *
 * Returns: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
			free(d->name);

		if (d->owner)
			free(d->owner);

		free(d);
	}
}

