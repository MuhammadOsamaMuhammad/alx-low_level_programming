#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of the params to the program
 * @argv: array of the program prarms
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
