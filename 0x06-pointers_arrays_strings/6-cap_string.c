#include "main.h"

/**
 * string_toupper - function to cap all string
 *
 * @n: string
 *
 * Return: pointer
*/

char *cap_string(char *n)
{
	int i;

	i = 0;
	while (n[i])
	{
		while (!(n[i] >= 'a' && n[i] <= 'z'))
		{
			i++;
			if (n[i-1] == ' '|| n[i - 1] == '\t'||
				n[i - 1] ==)
		}
	}
	return (n);
}
