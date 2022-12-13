#include "main.h"

/**
 *  print_last_digit - Entry point
 *
 * Return: -1 or 0 or 1
 *
 * @a: an int
 *
 * description: print the last digit of a number
 */


int  print_last_digit(int a)
{
	int l = a % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar('l');
	return (l);
}
