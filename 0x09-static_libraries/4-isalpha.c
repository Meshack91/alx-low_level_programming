#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: character in view
 * Return: 1 for c else 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
