#include <stdio.h>
#include "lists.h"

/**
 * print_list - Entry of the program
 * @h: sfsfsfsf
 * Return: adadada
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *nodo = h;

	for (; nodo != NULL; i++)
	{
		if (nodo->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", nodo->len, nodo->str);
		}
		nodo = nodo->next;
	}
	return (i);
}
