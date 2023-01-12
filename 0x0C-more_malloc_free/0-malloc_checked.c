#include "main.h"


/**
 * malloc_checked - Entry point
 * @b: the size to allocate in the memory
 * Return: pointer
 */


void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
