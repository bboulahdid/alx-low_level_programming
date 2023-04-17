#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: the dogs's name
 * @age: the dogs's age
 * @owner: the owner's name
 *
 * Return: a dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *dog_name;
	char *dog_owner;

	dog = malloc(sizeof(dog_t));

	if (dog != NULL)
	{
		dog->age = age;

		if (name != NULL)
		{
			dog_name = malloc(strlen(name) + 1);
			if (dog_name == NULL)
			{
				free(dog);
				return (NULL);
			}
			dog->name = strcpy(dog_name, name);
		}
		else
			dog->name = NULL;

		if (owner != NULL)
		{
			dog_owner = malloc(strlen(owner) + 1);
			if (dog_owner == NULL)
			{
				free(dog_name);
				free(dog);
				return (NULL);
			}
			dog->owner = strcpy(dog_owner, owner);
		}
		else
			dog->owner = NULL;
	}

	return (dog);
}

