#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer
 * Return: int
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len = len + 1;
		s = s + 1;
	}
	return (len);
}
