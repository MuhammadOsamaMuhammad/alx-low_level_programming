#include "main.h"

/**
 * largest_number - entry point
 * @a: input int
 * @b: input int
 * @c: input int
 * Return: largest number of three inputs
 */

int largest_number(int a, int b, int c)
{
	if (a > b && a > c)
	{
		return (a);
	}
	else if (b > c)
	{
		return (b);
	}
	return (c);
}
