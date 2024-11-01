#include <stdio.h>
#include "main.h"

/**
 *
 *
 **/

void swap_int(int *a, int *b)
{
	int swap = *b;
	*a = swap;
	*b = *a;
}
