#include "main.h"
/**
 * _strlen - Entry point
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int lngi = 0;

while (*s != '\0')
{
lngi++;
s++;
}
return (lngi);
}
