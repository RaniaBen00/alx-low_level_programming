#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - Entry point
 * @s: string to be converted
 * Return: Everytime 0 (success)
 */
int _atoi(char *s)
{
int i, a, b, num, c, digit;
i = 0;
a = 0;
b = 0;
num = 0;
c = 0;
digit = 0;
while (s[num] != '\0')
	num++;
while (i < num && c == 0)
{
if (s[i] == '-')
	++a;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
b = b * 10 + digit;
c = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
	break;
b = 0;
}
i++;
}
if (c == 0)
return (0);
return (n);
}
