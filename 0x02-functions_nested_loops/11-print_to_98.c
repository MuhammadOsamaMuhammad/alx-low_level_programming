#include "main.h"

/**
 * add - Entry point
 *
 * @i: first param
 *
 * @s: second param
 * Return: int
 *
 * description: print sum of two numbers
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar((n) + '0');
			if (n != 95)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar((n) + '0');
			if (n != 95)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		_putchar('9');
		_putchar('8');
	}
	_putchar('\n');

}
