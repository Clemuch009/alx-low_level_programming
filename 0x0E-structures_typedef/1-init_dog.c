/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to struct dog.
 * @name: pointer to a string name.
 * @age: age of the dog.
 * @owner: pointer to string owner.
 *
 * Return: nothing.
 */

#include "dog.h"
#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

