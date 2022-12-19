#include "main.h"

/**
 * strlen - function that returns the length of a string
 * @s: pointer
 * Return: int
 */

int _strlen(char *s)
{
		int l;

	while (*s != '\0')
	{
		l += 1;
		s += 1;
	}
	return (l);
}
