#include "main.h"

/**
 * int print_sign - Entry point
 *
 * Return: -1 or 0 or 1
 *
 * @a: an int
 *
 * description: the sign of  a number
 */


int print_sign(int a)
{
	if (a > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (a < 0)
	{
		_putchar('-');
		return (-1);
	}
	putchar('0');
	return (0);
}
