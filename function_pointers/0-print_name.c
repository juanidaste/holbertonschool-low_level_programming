#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - asdadadads
 * @name: adadada
 * @f: adadsadad
 * @x:
 * Return: adadadad
 */

void print_name(char *name, void (*f)(char *x))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
