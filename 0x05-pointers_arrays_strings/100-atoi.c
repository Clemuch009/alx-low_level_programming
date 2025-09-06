/**
 * atoi - convert a string to an integer.
 * @s: pointer to a string.
 *
 * Return: the integer converted from string.
 */

#include "main.h"

int _atoi(char *s)
{
	int i = 0;
	int size = 0;
	int arr[size];

	while (s[i] != '\0')
	{
		if (s[i] >= '0' || s[i] <= '9')
		{
			if (s[i - 1] == '-')
			{
				int a = - s[i];

				size++;
				arr[i] = a;
			}

			else
			{
				size++;
				int a = s[i];
				arr[i] = a;
			}
		}

		i++;
	}
	return (arr);
}


