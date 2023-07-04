#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: string
 * @accept: bytes
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, n;
for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; acceptn[n] != s[i]; n++)
{
if (accept[n] == '\0')
return (i);
}
}
return (i);
}
