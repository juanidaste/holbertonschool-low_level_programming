#include<stdio.h>
#include "main.h"

/**
 * print_square - Entry of the program
 * @size: aidad
 * print_square - ioneriwi
 **/

void print_square(int size)
{
	int i;
	int w;

	w = 0;
	if (size > 0)
	{
	while (w < size)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
			_putchar('\n');
			w++;
	}
	}
		else
		{
			_putchar('\n');
		}

}
