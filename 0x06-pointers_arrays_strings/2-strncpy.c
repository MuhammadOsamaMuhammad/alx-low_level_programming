#include "main.h"

/**
 * _strncpy - function to copy strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number of bytes in the second string
 *
 * Return: pointer to the first string @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
	}
	while (j < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
