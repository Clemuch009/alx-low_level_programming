#include "main.h"

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n/2 +  _sqrt_recursion(n / 2));
}
