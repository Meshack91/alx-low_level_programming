#include "main.h"
/**
 * reverse_array - function name
 * @a: parameter one
 * @n: parameter two
 * Return: void
 */
void reverse_array(int *a, int n)
{
int tmp;
int index;

for (index = n - 1; index >= n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
