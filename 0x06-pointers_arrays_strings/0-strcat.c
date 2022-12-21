#include "main.h"

/**
 * _strcat - function to concate two strings
 *
 * @*dest: first string
 *
 * @*src: second string
 *
 * Return: pointer to the first string
*/

char *_strcat(char *dest, char *src)
{
	int l1;
	int l2;
	int i;

	l1 = 0;
	l2 = 0;

	while (src[l1] != '\0')
		l1++;

	while (dest[l2] != '\0')
		l2++;

	for (i = 0; i <= l1; i++)
	{
		dest[l2 + i] = src[i];
		l2++;
	}
	return (dest);
}
