#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int a = 0, f = 0, cat1 = 0, cat2 = 0;
while (s1 && s1[cat1])
cat1++;
while (s2 && s2[cat2])
cat2++;
if (n < len2)
s = malloc(sizeof(char) * (cat1 + n + 1));
else
s = malloc(sizeof(char) * (cat1 + cat2 + 1));
if (!s)
return (NULL);
while (a < cat1)
{
s[a] = s1[a];
a++;
}
while (a < cat2 && a < (cat1 + n))
s[a++] = s2[f++];
while (n >= cat2 && a < (cat1 + cat2))
s[a++] = s2[f++];
s[a] = '\0';
return (s);
}
