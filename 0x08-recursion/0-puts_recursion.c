/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: 
 *
 *
 */

#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	
	_putchar(*s);
	_puts_recursion(s + 1);
}

/*int main(void)
{
	    char str[] = "hello";
	    _puts_recursion(str);
	    return 0;
}*/
