#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Return: 0 or 1
 *
 * @a: an int
 *
 * description: print lowercase alphabet
 */


int _isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		return (1);
	}
	return (0);
}
