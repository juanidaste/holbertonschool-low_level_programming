#include <stdio.h>
#include "lists.h"

/**
 * list_len - Function that returns the number of elements of list_t
 * @h: Pointer to list_t
 * Return: The number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t contador;

	current = h;
	contador = 0;

	for (; current != NULL; current = current->next)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		contador++;
	}
	return (contador);
}

