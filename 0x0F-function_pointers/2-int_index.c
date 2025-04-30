/*
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if(size <= 0)
	{
		return (-1);
	}

	if(array == NULL || cmp == NULL)
	{
		return (NULL);
	}

	for(int i = 0; i < size; i++)
	{
		if(cmp(array[i]))
		{
			return (i);
		}
	}
	
	return (-1);
}
