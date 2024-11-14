#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry of thr program
 * @str: saasd
 * Return: dadad
 */


char *_strdup(char *str)
{
	int i; 
	int largo = 0;
	char *clon;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			largo += 1;
		}

		clon = (char *)malloc((largo + 1) *sizeof(char));

		if (clon == NULL)
		{
			return (NULL);
		}
		for (i = 0; i <= largo; i++)
		{
			clon[i] = str[i];
		}
		return (clon);
	}
}
