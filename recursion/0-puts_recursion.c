#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Entry of the program
 * _puts_recursion - wfwfwf
 * @s: fwfwf
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
		_putchar('\n');
}
