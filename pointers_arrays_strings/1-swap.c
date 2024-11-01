#include <stdio.h>
#include "main.h"

/**
 * swap_int - Entry of the program
 * @a: kekekek
 * @b: xekekek
 **/

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
