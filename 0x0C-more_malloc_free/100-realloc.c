#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *old_ptr;
	char *new_ptr;
	
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_size);
	}

	if (new_size == 0)
	{
		free(ptr);
		return(NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	old_ptr = (char *)ptr;

	if(old_size < new_size)
	{
		for(i = 0; i < old_ptr; i++)
		{
			new_ptr[i] = old_ptr[i];
		}
	}

	free(ptr);

	return (new_ptr);
}

