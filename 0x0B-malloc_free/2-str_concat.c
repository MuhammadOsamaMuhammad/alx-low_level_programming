#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: pointer to the address in the memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *strnew = NULL;
	unsigned int i;
	int n;
	int j;
	int c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (n = 0; s1[n] != '\0'; n++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	strnew = (char *)malloc((n + j + 1) * sizeof(char));

	if (strnew != NULL)
	{
		for (i = 0;  s1[i] != '\0'; i++)
		{
			strnew[i] = s1[i];
		}
		for (c = 0; s2[c] != '\0'; c++)
		{
			strnew[i] = s2[c];
			i++;
		}
	} else
	{
		return (NULL);
	}
	return (strnew);
}
