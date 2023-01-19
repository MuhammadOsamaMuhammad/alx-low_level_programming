#include "variadic_functions"
#include <stdrag.h>
#include <stdio.h>

/*
 * print_numbers - print number followed by a new line
 * @n: numbers to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int i;
	va_list l;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;

	va_start(l, n);

	if (n > 0)
		printf("%d", ca_arg(l, int));

	for (i = 0; i < n; i++)
		printf("%s%d", sep, vaarg(l, int));
	printf("\n");
	va_end(l);
}
