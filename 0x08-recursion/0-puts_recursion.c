#include "main.h"

/**
 * _put_recusrion - prints string
 * @s: string
 * Return: 1
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
