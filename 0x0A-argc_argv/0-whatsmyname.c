#include "main.h"
#include <stdio.h>

/**
 * main -Prints the name of the program
 * @argc: number of the params to the program
 * @argv: array of the program prarms
 * Return: returns 0 when succsess
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
