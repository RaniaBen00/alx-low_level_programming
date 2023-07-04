#include "main.h"

/**
 * _strstr - function that locates a substring
 * @needle: input
 * @haystack: input
 * Return: Everytime 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
for (*haystack != '\0'; haystack++)
{
char *f = haystack;
char *k = needle;
while (*f == *k && *k != '\0')
{
f++;
k++;
}
if (*f == '\0')
return (haystack);
}
return (0);
}
