#include<stdio.h>
#include "main.h"

/**
 *
 */

void more_numbers(void)
{
	int num;
	int stop;

	stop = 0;

	while (stop < 10)
	{
		for (num = 0; num <= 14; num++)
		{

			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		 _putchar('\n');
		  stop++;
	}
}
