#include<stdio.h>
#include "main.h"

/**
 * print_diagonal - Entry of the program
 * @n: adjuid
 * print_diagonal - nfwnfiw
 **/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return; /* TRANQUI BETTY NO RETORNA NADA */
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
