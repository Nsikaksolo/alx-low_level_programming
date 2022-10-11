#include "dog.h"
#include <unistd.h>

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: the dog to be initialized.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
