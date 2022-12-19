#include "main.h"

/**
 * _puts - function that print a string using pointers
 * @str: pointer
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
