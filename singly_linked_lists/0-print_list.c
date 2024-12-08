#include <stdio.h>
#include "lists.h"

/**
 *  * print_list - Function that prints all elements of list_t
 *   * @h: Pointer to list_t
 *    * Return: The number of nodes
 *     */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}

