#include "main.h"

/**
 * string_toupper - function to cap all string
 *
 * @n: string
 *
 * Return: pointer
*/

char *cap_string(char *n)
{
	int index = 0;
	
	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		{
			index++;
		}
		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
