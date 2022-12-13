#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0
 *
 * description: print alphabet 10x
 */


int print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
	_putchar("\n");
}
