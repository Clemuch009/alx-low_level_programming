/*
 *
 *
 */

#include <stdio.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d1 = malloc(size(struct dog_t));
	if(d1 == NULL)
	{
		return (NULL);
	}

	d1->name = malloc(strlen(name) + 1);
	if(d1->name == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	strcpy(d1->name, name);

	d->age = age;

	d1->owner = malloc(strlen(owner) + 1);
	if(d ->owner == NULL)
	{
		free(d1-> name);
		free(d1);
		return (NULL);
	}

	strcpy(d1->owner = owner);
}
