#include "main.h"

/**
 * reverse_array - function to reverse a string
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
