#include "main.h"

/**
 * factorial - clac the factorial of an int
 * @n: integar
 * Return: the factorial
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
