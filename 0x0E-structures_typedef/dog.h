#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define struct dog.
 * @age: age of the dog.
 * @name: pointer to string name.
 * @owner: pointer to owner.
 *
 * Description: This struct stores information about a dog,
 * including its age, name, and owner.
 */

typedef struct dog
{
	float age;
	char *name;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

