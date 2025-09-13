/**
 * create_array - creates an array of chars/
 *  and initializes it with a specific char.
 *  @size: size of memeory to be allocated.
 *  @c: bytes to fill the memory/.
 *
 *  Return: pointer to allocated memory or NULL if fail.
 */

#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc((size + 1) * sizeof(char));

	if (str == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	/*free(str);*/
	return (str);
}
