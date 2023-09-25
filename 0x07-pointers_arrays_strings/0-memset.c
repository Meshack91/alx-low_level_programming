#include "main.h"

/**
 * _memset - the function
 * @s: A pointer to the memory block
 * @b: The value you want to set
 * @n: The number of bytes to set to the value b
 * Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n-- > 0)
		*s++ = b;
	return (s);
}
