#include "main.h"
#include <stdio.h>
/**
 * main - print a fizz buzz program
 * Return: always 0 (Success)
 */
int main(void)
{
int c;

for (c = 1; c <= 100; c++)
{
if ((c % 3 == 0) && (c % 5 == 0))
{
printf("fizzbuzz");
}
else if (c % 3 == 0)
{
printf("fizz");
}
else if (c % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", c);
}
if (c != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
