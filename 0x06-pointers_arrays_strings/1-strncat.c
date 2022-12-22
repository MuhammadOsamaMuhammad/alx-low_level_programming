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
	int i;
        int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
        return (dest);
}
