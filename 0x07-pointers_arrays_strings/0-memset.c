#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to put constant
 * @b: byte constant
 * @n: max bytes to use
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; n > 0; a++, n--)
{
s[a] = b;
}
}
return (s);
}
