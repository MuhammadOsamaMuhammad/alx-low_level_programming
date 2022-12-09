#include<stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{

	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
