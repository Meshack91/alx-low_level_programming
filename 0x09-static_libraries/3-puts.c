#include "main.h"
/**
 * _puts - for printing standout string
 * @str: the string to be printed
 * _putchar prints new line
 */
void _puts(char *str)
{
while (*str)
	_putchar(*str++);
_putchar('\n');
}
