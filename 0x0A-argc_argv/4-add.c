/*
 *
 *
 */

#include <stdio.h>

int is_digit(char *s)
{
	int i = 0;
	if(s[0] == '\0')
	{
		return (0);
	}

	while(s[i])
	{
		if(! isdigit(s[i]))
			return (0);
		i++;
	}

	return 1;
}

int main(int argc, char *argv[])
{
	int sum = 0;
	for(i = 1; i < argc; i++)
	{
		if(! is_digit(argv[i]))
		{
			pritnf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
