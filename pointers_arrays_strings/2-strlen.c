#include "main.h"

/**
 *_strlen - returns the lenght of a string
 *Return: no retorna nada
 *@s: cada letra del string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
	lenght++;
	s++;
	}
	return (lenght);
}
