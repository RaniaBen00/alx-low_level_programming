#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Entry Point
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int a, b, c = 0, f = 0;
char *strl;
if (ac == 0 || av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
f++;
}
f += ac;
strl = malloc(sizeof(char) * f + 1);
if (strl == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
strl[c] = av[a][b];
		c++;
}
if (strl[c] == '\0')
{
strl[c++] = '\n';
}
}
return (strl);
}

