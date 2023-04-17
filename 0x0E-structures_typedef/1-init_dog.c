#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable
 * @d: the initialized variable
 * @name: first member
 * @age: the other member
 * @owner: yet another member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL) /* validate if d initiated correctly */
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
