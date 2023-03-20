#include "main.h"

/**
 * _islower - Entry point
 *
 * Return: 0 or 1
 *
 * @a: an int
 *
 * description: print lowercase alphabet
 */


int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	return (0);
}
