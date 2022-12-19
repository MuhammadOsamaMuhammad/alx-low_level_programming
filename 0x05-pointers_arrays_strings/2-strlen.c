#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	    for (i = 0; s[i] != '\0'; ++i)
	    {
		    printf("%i\n", i);
	    }

	    return (i);
}
