/*
 * write
 * author
 *
 */

#include "main.h"

/**
 * print -prints every minute of the day of Jack Bauer
 *  starting from 00:00 to 23:59
 *
 *  Return: 0
 */

void jack_bauer(void)
{
	int hour, time;

	for (hour = 0; hour <= 23; hour++)
		for (time = 0; time <= 59; time++)
		{
			_putchar((time / 10) + '0');
			_putchar((time % 10) + '0');
			_putchar(':');
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar('\n');
		}
}
