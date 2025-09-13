/**
 * malloc_checked -  allocates memory using malloc.
 * @b: sizee to be allocated.
 *
 * Return: nothing.
 */

#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
		exit(98);

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	
	return (ptr);
}
