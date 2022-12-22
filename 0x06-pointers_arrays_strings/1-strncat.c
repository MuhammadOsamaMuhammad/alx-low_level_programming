#include "main.h"

/**
 * _strncat - function to concate two strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number of bytes in the second string
 *
 * Return: pointer to the first string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int l1;                                                                               
        int l2;                                                                               
        int i;                                                                                
                                                                                              
        l1 = 0;                                                                               
        l2 = 0;                                                                               
                                                                                              
        while (src[l1] != '\0')                                                               
                l1++;                                                                         
                                                                                              
        while (dest[l2] != '\0')                                                              
                l2++;                                                                         
                                                                                              
        for (i = 0; i <= l1; i++)                                                             
        {                                                                                     
                dest[l2 + i] = src[i];                                                        
        }                                                                                     
        return (dest);
}
