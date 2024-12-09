#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	node->len = _strlen(node->str);
	node->next = *head;
	*head = node;

	return (*head);
}
