/*
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * Description: From 00:00 to 23:59
 *
 */

#include <stdio.h>

void jack_bauer(void)
{
	int hr;
	int mnt;

	for (hr = 0; hr < 24; hr++)
	{
		fori (mnt = 0; mnt <= 59; mnt++)
		{
			printf(" %02d:%02d\n", hr, mnt);
		}
	}
}
