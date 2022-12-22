#include "main.h"

/**
 * _strncpy - function that copies a string.
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: pointer to the first string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int len1;
	int len2;
	int i;

	len1 = 0;
	len2 = 0;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	for (; i < len2; i++)
		dest[i] = dest[i];

	return (dest);
}
