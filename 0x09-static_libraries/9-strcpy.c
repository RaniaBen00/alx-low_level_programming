#include "main.h"

/**
 * char *_strcpy - Entry point
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int f = 0;
int s = 0;

while (*(src + f) != '\0')
{
f++;
}
for ( ; s < 1 ; s++)
{
dest[s] = src[s];
}
dest[f] = '\0';
return (dest);
}

