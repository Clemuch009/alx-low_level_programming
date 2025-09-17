/**
 * print_name -  prints a name.
 * @name: pointer to string.
 * @f: pointer to a function.
 *
 * Return: nothing.
 */

#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
