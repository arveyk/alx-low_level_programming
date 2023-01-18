#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds info about Poppy
 * @name: name of Poppy
 * @age: how old he/ she is
 * @owner: owner's name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
