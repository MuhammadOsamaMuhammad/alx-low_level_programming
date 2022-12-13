#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always void
 *
 * description: print alphabet 10x
 */


void print_alphabet_x10(void)
{
	int i = 0;

	int f;

	while (i < 10)
	{
		for (f = 'a'; f <= 'z'; f++)
		{
			_putchar(f);
		}
		_putchar('\n');
		i++;
	}
}
