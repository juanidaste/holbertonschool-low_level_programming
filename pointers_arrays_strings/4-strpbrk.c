#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry of the program
 * _strpbrk - edwkmdwmd
 * @s: iiewinfiwnf
 * @accept: infiwofinw
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	char *puntero;

	puntero = 0;

	while (*s)
	{
		puntero = accept;
		while (*puntero)
		{
			if (*s == *puntero)
				return (s);
			puntero++;
		}
		s++;
	}
	return (0);
}
