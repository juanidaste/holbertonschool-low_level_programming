#include "dog.h"
#include <stdio.h>

/**
 * init_dog - dadada
 * @d:adadadad
 * @name:asdadadad
 * @age:asdadada
 * @owner:asdadasd
 * Description:asdadadad
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
