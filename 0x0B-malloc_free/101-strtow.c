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
/**
 * **strtow - Entry Point
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **coding, *tmf;
int a, f = 0, went = 0, line, c = 0, begin, stop;
while (*(str + went))
went++;
line = count_word(str);
if (line == 0)
return (NULL);
coding = (char **) malloc(sizeof(char *) * (line + 1));
if (coding == NULL)
return (NULL);
for (a = 0; a <= went; a++)
{
if (str[a] == ' ' || str[a] == '\0')
{
if (c)
{
stop = a;
tmf = (char *) malloc(sizeof(char) * (c + 1));
if (tml == NULL)
return (NULL);
while (begin < stop)
*tml++ = str[begin++];
*tml = '\0';
coding[f] = tml - c;
f++;
c = 0;
}
}
else if (c++ == 0)
begin = a;
}
coding[f] = NULL;
return (coding);
}
