#include "main.h"

/**
 * rev_string - function that returns the length of a string
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
	
	while (i >= 0)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
