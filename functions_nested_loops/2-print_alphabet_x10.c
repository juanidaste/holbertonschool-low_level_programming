#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Function that prints the alphabet in lowercase 10 times
 * Return: Void
 */
void print_alphabet_x10(void)

{
char alph = 'a';
int contador = 0;

	while (contador <10)
{

	while (alph <= 'z')
{
	_putchar(alph);
	alph++;
	contador++;
}
}
	_putchar('\n');
	return (0);
}
