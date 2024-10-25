#include<stdio.h>

int main(void)
{
	char alphr;

	alphr = 'z';

	while(alphr <= 'a')
	{
	putchar(alphr);
	alphr--;
	}
	putchar('\n');
	return (0);
}
