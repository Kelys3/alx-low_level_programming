#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's description
 * @name: dog's name
 * @age: dog's age
 * @owner: name of dog's owner
 *
 * Description: this header file describes a dog in details
 * taking into account it's name, age and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for struct dog
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
