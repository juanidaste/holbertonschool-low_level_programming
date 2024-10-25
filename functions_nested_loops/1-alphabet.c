#include "main.h"
/**
 *print_alphabet - This program will assign a random number
 *
 *to the variable n each time it is executed.
 */

void print_alphabet(void)
{
char alph = 'a';

	while (alph <= 'z')
{
	_putchar(alph);
	alph++;
}
	_putchar('\n');

}
