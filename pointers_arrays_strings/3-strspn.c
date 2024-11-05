#include<stdio.h>
#include "main.h"

/**
 * _strspn - Entry of the program
 * _strspn - bwubfwubf
 * @s: dwwerwer
 * @accept: ddww
 * Return: contador
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int contador;
	char *ptr;

	while (*s)
	{
		ptr = accept;
		while (*ptr)
		{
			if (*s == *ptr)
			{
				contador++;
				break;
			}
			ptr++;
		}
		if (*ptr == '\0')
			break;
		s++;	
	}
	return (contador);
}
