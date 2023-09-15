#include "main.h"
/**
 * print_most_numbers - print the numbers since 0 up to 9
 * Description: prints the number excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */
void print_most_numbers(void)
{
int c;
for (c = 0; c < 10; c++)
{
if (c != 2 && c != 4)
{
_putchar(c + '0');
}
}
_putchar('\n');
}
