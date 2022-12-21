#include "main.h"
#include <string.h>



char *_strcat(char *dest, char *src)
{
	unsigned int i;

	unsigned int destLen = strlen(dest);
	
	unsigned int srcLen = strlen(src);
	
	i =  destLen + srcLen;
	
	int s = 0;
	
	unsigned int srcLen = strlen(src);
	int s = 0;
	while (s < srcLen)
	{
		dest[destLen] = src[s];
		s++;
	}
	return (*dest);
}
