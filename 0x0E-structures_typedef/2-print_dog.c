/*
 *
 */

#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if(d ->name == NULL)
	{
		printf("name : (nil)\n");
	}
	else
	{
		printf("name : %s\n", d ->name);
	}


        if(d ->owner == NULL)
        {
                printf("owner : (nil)\n");
        }
        else
        {
                printf("name : %s\n", d ->owner);
        }

	print("age : %d\n", d ->age);
}

