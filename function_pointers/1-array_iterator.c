#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - adadadadada
 * @array: adadadad
 * @size: asdadadad
 * @action: adasdadda
 * Return: adasdada
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
