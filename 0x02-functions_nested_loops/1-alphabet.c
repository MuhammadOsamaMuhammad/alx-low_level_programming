#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0
 *
 * description: print lowercase alphabet
 */


void print_alphabet(void)
{
	char f = 'a';

	while(f <= 'z')
	{
		_putchar(f);
		f++;
	}

	_putchar('\n');

	return (0);
}
