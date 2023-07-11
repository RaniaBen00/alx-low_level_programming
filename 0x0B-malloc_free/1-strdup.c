#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Entry point
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *rania;
int i, n = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
rania = malloc(sizeof(char) * (i + 1));
if (rania == NULL)
return (NULL);
for (n = 0; str[n]; n++)
rania[n] = str[n];
return (rania);
}
