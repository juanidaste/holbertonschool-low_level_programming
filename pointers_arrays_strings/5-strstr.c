#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strstr - Entry of the program
 * @haystack: String 1
 * @needle: String 2
 * Return: sfsfssfs
 */

char *_strstr(char *haystack, char *needle)
{
	char *puntero1;
	char *puntero2;

	puntero1 = 0;
	puntero2 = 0;

	while (*haystack != '\0')
	{
		puntero1 = haystack;
		puntero2 = needle;
		while (*puntero1 != '\0' && *puntero2 != '\0' && *puntero1 == *puntero2)
		{
			puntero1++;
			puntero2++;
		}
		if (*puntero2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
