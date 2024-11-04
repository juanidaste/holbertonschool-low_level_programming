#include "main.h"
#include <stdio.h>
/**
  print_triangle - Entry of the programt
  print_triangle - sfsfsfs
  @size: fsfsfsfs
  */
void print_triangle(int size)
{
	int x, i, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 1; h <= size; h++)
		{
			x = size - h;
			for (i = 0; i < x; i++)
			{
				_putchar(' ');
			}

			for (i = 0; i < h; i++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
