#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: the string to be appended upon
 * @src: the string to append to dest
 * @n: the number of bytes
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0; int dest_len = 0;

while (dest[index++])
	dest_len++;
for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
return (dest);
}
