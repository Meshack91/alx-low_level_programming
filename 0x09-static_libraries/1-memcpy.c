#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: stored memory
 * @src: copied memory
 * @n: byte number
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int j = n;

	for (; m < j; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
