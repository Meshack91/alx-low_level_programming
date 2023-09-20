#include "main.h"
/**
 * _strcmp - compare pointer to string
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: if str1 < str2,negative diff
 * if str1 > str2,positive diff
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
