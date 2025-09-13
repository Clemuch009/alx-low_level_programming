#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			for (i = 0; needle[i] != '\0'; i++)
			{
				
				if (needle[i] != *haystack)
					break;
			}
			if (needle[i] == '\0')
				return haystack;
		}
		haystack++;
	}

	return (NULL);
}
			

