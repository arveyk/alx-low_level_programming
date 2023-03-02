#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds info about Poppy
 * @name: name of Poppy
 * @age: how old he/ she is
 * @owner: owner's name
 *
 * Description: what else is there to describe? Holby?
 */

struct dog
{
	/**
	 * @name: name of the dog
	 *
	 * Description: what the owner call him/ her
	 */
	char *name;
	/**
	 * @age: age of the dog
	 *
	 * Description: the number of years the dog has lived
	 */
	float age;
	/**
	 * @owner: name of the owners
	 *
	 * Description: the dogs best friend
	 */
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
