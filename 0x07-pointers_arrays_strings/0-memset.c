#include "main.h"

/**
 * @s: A pointer to the memory block where you want to set values.
 * @b: The value you want to set (usually a character or a byte).
 * @n: The number of bytes to set to the value b.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n-- > 0)
		*s++ = b;
	return (s);
}
