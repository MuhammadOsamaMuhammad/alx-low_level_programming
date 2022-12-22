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
 * Return: pointer to the first string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i;

	l2 = 0;

	while (dest[l] != '\0')
		l++;

	for (i = 0; i < n; i++)
	{
		dest[l + i] = src[i];
	}
	return (dest);
}
