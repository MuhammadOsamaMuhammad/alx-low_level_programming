#include "main.h"

/**
 * isupper - Entry point
 *
 * Return: 1 or 0
 *
 * description: checks if an input is upper or not
 */


int _isupper(int c);
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
