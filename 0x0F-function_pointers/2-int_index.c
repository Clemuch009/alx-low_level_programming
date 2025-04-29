/*
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL && cmp == NULL)
	{
		return (NULL);
	}
	
	if(size <= 0)
	{
		return (-1);
	}

	array = malloc(size * sizeof(int));

	for(i = 0; i < size; i++)
	{
		if(arry[i] !cmp(array))
		{
			return (array[i]);
		}

		if(!cmp(array))
		{
			return(-1);
		}
	}
}



