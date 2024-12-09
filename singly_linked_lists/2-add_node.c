#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - Function that returns the length of a string
 * @s: String whose length is to be calculated
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}


/**
 * add_node - Function that adds a new node at the beginning of a list_t list
 * @head: Pointer to the head node of the list
 * @str: The string to be added to the new node
 * Return: The address of the new node, or NULL if it failed
 */

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
