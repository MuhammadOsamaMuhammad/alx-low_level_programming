#include<stdio.h>

/**
 * main - print alphabet lower and upper cases
 *
 * Return: Always return 0
 */

int main(void)
{
	int ch;

	for (ch = 97; ch < 123; ch++)
	{
		putchar(ch);
	}

	for (ch = 65; ch < 91; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
