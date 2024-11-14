#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Entry of the program
 * @s1: asdadadad
 * @s2: idasd
 * Return: asdadda
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1, len2, i, j;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	string = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{

		str[len1 + j] = s2[j];
	}
	str[len1 + len2] = '\0';
	
	return (str);
}
