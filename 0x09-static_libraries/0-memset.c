#include "main.h"
/**
 * _memset - function to fill a block of memory
 * @s: begining address to be filled
 * @b: the required value
 * @n: number of bytes
 * Return: change array with new values
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
	s[i] = b;
	n--;
}
return (s);
}
