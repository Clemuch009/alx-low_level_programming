/*
 *
 */


void puts_half(char *str)
{
	int length_of_the_string = 0;
	int i;
	int n;

	while( s[i] != '\0')
	{
		length_of_the_string++;
		i++;
	}

	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
		
		while( n <= length_of_the_string)
		{
			putchar(str[n]);
			n++;
		}
	}

	else if ( length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;

		while(n < length_of_the_string)
		{
			putchar(str[n]);
			n++;
		}

		putchar('\n');
	}
}
