#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return(NULL);
		
	array = malloc(size * sizeof(char));
	for(i = 0 ; i < size ; i++)
		array[i] = c;
	return array;
	if (array == NULL)
		return NULL;
}
		
		
