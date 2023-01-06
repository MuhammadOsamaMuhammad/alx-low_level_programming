#include "main.h"
#include <stdio.h>

/**
 * main -Print the arguments
 * @argc: number of the params to the program
 * @argv: array of the program prarms
 * Return: returns 0 when succsess
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (i = 0; *argv; i++, argv++)
		printf("%d\n", i - 1);
	}

	return (0);
}
