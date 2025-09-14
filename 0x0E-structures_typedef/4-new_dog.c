/**
 * new_dog -  creates a new dog.
 * @name: pointer to string name.
 * @age: age of a dog.
 * @owner: pointer to owner of the dog.
 *
 * Return: pointer to new dog.
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NUii)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(strlen(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	strcpy(new_dog->name, name);
	new_dog->age = age;

	return (new_dog);
}

