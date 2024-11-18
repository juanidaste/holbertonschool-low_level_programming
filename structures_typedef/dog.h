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
void free_dog(dog_t *d);
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
