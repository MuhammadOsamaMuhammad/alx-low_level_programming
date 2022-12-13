#include "main.h"

/**
 *  time_table - Entry point
 *
 * Return: void
 *
 *
 * description: print the time table from 0 to 9
 */


void times_table(void)
{
	int n, r, f;

	for (n = 0; n <10; n++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (r = 0; r < 9; r++)
		{
			f = n * r;
			if (f / 10 > 0)
			{
				_putchar((f / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((f / 10) + '0');

			if (f < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
