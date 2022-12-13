#include "main.h"

/**
 *  _abs - Entry point
 *
 * Return: -1 or 0 or 1
 *
 * @a: an int
 *
 * description: return the abs value of a number
 */


int  _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (-1 * a);
	}
	return (0);
}
