/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14.
 *
 * Return: nothing.
 */

 #include "main.h"

void more_numbers(void)
{
	char i = '0';
	int count;
	
	for (count = 0; count < 10; count ++)
	{
		while (i <= '9')
		{
			_putchar(i);
			if (i >= '9')
			{
				char j = '1';
				while (i <= '4')
				{
					_putchar(i + '0');
					j++;
				}
			}
			i++;
			_putchar('\n');
		}
	}
}

int main(void)
{
	more_numbers();
	return (0);
}

