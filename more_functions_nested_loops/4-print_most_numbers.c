#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Entry  point
 * print_most_numbers - nfowhfown
 */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != '2' /* 2 en ascii -> 50 | 2 + '0' */ && num != '4')
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
