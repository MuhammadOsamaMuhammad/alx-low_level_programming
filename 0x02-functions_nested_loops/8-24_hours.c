#include "main.h"

/**
 *  jack_bauer - Entry point
 *
 * Return: -1 or 0 or 1
 *
 * @a: an int
 *
 * description: print the last digit of a number
 */


void jack_bauer(void)
{
	int i, j ;
	
	for (i = 0; i < 24 ; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
