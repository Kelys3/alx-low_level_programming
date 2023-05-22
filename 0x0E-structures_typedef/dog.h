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
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
