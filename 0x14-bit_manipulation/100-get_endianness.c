/**
 * file6
 * author
 */

#include "main.h"
/*
 * @x check
 */

int get_endianness(void)
{
	int y = 1;
	char *x = (char *)&y;

	if (*x == 1)
		return (1);

	return (0);
}
