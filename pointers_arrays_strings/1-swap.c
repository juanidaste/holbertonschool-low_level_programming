#include <stdio.h>
#include "main.h"

/**
 * swap_int - Entry of the program
 * @a: kekekek
 * @b: xekekek
 **/

void swap_int(int *a, int *b)
{
	int swap = *b;
	*a = swap;
	*b = *a;
}
