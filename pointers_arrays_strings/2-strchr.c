#include<stdio.h>
#include "main.h"

/**
 * _strchr - Entry of the program
 * _strchr - adadad
 * @s: adada
 * @c: ddqd
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == c)

		return (&s[i]);

	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (NULL);

}
