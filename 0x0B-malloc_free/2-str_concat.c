#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Entry Point
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *cnt;
int i, at;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = at = 0;
while (s1[i] != '\0')
i++;
while (s2[at] != '\0')
at++;
cnt = malloc(sizeof(char) * (i + at + 1));
if (cnt == NULL)
return (NULL);
i = at = 0;
while (s1[i] != '\0')
{
cnt[i] = s1[i];
i++;
}
while (s2[at] != '\0')
{
cnt[i] = s2[at];
i++, at++;
}
cnt[i] = '\0';
return (cnt);
}
