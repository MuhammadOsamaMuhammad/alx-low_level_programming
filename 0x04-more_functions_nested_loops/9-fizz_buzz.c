#include "main.h"
#include <stdio.h>
/**
 * main -  entry point
 *
 * Return: 1
 */
int main(void)
{
	int i;

	for (i = 0; i <=  100; i++)
	{
		if ((i % 3 == 0 && (i % 5 != 0)))
		{
			printf("Fizz");
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FuzzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	return (1);
}
