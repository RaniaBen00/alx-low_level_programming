#include <stdlib.h>
#include "main.h"

/**
 * count_word - Entry Point
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
int fly, z, x;
fly = 0;
x = 0;
for (z = 0; s[z] != '\0'; z++)
{
if (s[z] == ' ')
fly = 0;
else if (fly == 0)
{
fly = 1;
x++;
}
}
return (x);
}
