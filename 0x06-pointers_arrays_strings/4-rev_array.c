#include "main.h"

/**
 * _strcmp - function to compater strings
 *
 * @a: array
 *
 * @n: array length
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
