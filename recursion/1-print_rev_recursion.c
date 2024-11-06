#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Entry of the program
 * _print_rev_recursion - efenfuef
 * @s: dwwfwf
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
			_putchar(*s);
	}
}
