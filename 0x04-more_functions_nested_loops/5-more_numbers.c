#include "main.h"

/**
 * more_numbers - a function print number from 0 to 14 10x
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{

		for (i = 0; i < 15; i++)
		{
			if (j >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
