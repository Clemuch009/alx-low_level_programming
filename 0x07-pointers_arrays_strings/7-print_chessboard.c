/*
 *
 */

#include <stdio.h>

void print_chessboard(char (*a)[8])
{
	int i, j;
	for(i = 0; i <= 8; i++)
	{
		for(j = 0; j <= 8; j++)
		{
			putcher(a[i][j]);
		}
		putchar('\n');
	}
}
