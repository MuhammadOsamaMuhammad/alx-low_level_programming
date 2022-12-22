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
	int len1 = 0; /* string length for src */
	int len2 = 0; /* string length for dest */
	int i;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i < n; i++)
	{
		if (i < len1)
		{
			dest[len2 + i] = src[i];
		}
		else
		{
			dest[len2 + i] = '\0';
		}
	}
// 	dest[l + i] = '\0';
	return (dest);
}
