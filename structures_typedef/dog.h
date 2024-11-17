#ifndef DOG_H
#define DOG_H

/**
 * struct dog - age, name, owner
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * @name: name of the dog
 * Description: adadadddadadaddadadadadadadad
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
