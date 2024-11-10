#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry of the program
 * main - dadad
 * @argc: adsadad
 * @argv: dadad
 * Return: aasdad
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *p;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		p = argv[i];
		while (*p)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
			p++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
