#include "main.h"

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

int main(void)
{
	    print_diagonal(100);
	    return (0);
}
