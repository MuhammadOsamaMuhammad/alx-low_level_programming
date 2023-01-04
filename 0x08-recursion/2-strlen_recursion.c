#include "main.h"

/**
 * _strlen_recursion(char *s) - return the len of a string
 * @s: string
 * Return: int length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
