#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Entry of the program
 * _memcpy - dadadad
 * @dest: adasdadsa
 * @src: afsfsf
 * @n: deewrw
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
