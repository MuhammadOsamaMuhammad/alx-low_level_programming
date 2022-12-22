#include "main.h"

/**
 * _strncat - function to concate two strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number of bytes in the second string
 *
 * Return: pointer to the first string
*/

char *_strncat(char *dest, char *src, int n)
{
	int l2;
	int i;

	l2 = 0;

	while (dest[l2] != '\0')
		l2++;

	for (i = 0; i <= n; i++)
	{
		dest[l2 + i] = src[i];
	}
	return (dest);
}
