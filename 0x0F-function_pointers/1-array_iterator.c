/*
 *
 */
 void array_iterator(int *array, size_t size, void (*action)(int))
{
	array = malloc(size);
	if(array == NULL && action == NULL)
	{
		return (NULL);
	}

	action(array);
}
