/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: 0 on success.
 */

#include <stdio.h>

int main(void)
{
	int i = 48;
	int j = 49;
	
	while (i <= 57 && j <= 57)
	{
		if ( j <= 57)
		{
			putchar(48);
			putchar(j);
			putchar(',');
			putchar(' ');

		}
		
		else if (i < j) 
		{
			putchar(i);
			putchar(j);
		}

		i++;
		j++;
	}

	return 0;
}

