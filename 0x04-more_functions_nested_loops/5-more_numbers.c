#include "main.h"

/**
 * more_numbers - a function print number from 0 to 14 10x
 * Return: void
 */

void print_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
