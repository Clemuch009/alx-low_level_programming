/*
 *
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if(name == NULL && f == NULL)
	{
		return (NULL);
	}
	f(name);
}
