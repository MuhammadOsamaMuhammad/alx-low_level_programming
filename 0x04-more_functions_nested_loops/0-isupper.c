#include "main.h"

/**
 * isupper - Entry point
 *
 * @c: int input
 *
 * Return: 1 or 0
 *
 * description: checks if an input is upper or not
 */


int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
