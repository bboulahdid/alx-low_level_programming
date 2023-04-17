#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's structure
 * @name: the dogs's name
 * @age: the dogs's age
 * @owner: the owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* DOG_H */

