#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: Everytime 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int f;
while (*s)
{
for (f = 0; accept[f]; f++)
{
if (*s == accept[f])
return (s);
}
s++;
}
return ('\0');
}
