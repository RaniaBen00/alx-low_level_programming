#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Entry Point
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
 * *_calloc - Entry Point
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pnt;
if (nmemb == 0 || size == 0)
return (NULL);
pnt = malloc(size * nmemb);
if (pnt == NULL)
return (NULL);
_memset(pnt, 0, nmemb * size);
return (pnt);
}
