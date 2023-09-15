#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: the number of diagonal lines
 * Return: empty
 */
void print_diagonal(int n)
{
int c, d;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (c = 0; c < n; c++)
{
for (d = 0; d < c; d++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
