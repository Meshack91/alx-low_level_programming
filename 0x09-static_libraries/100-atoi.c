#include "main.h"
/**
 * _atoi - for converting string to integer
 * @s: the string
 *
 * Return: integer
 */
int _atoi(char *s)
{
int sign = 1;
int i = 0;
unsigned int unsign = 0;

while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
	sign *= -i;
i++;
}
while (s[i] <= 'a' && (s[i] >= '0' && s[i] != '\0'))
{
unsign = (unsign * 10) + (s[i] - '0');
i++;
}
unsign *= sign;
return (unsign);
}
