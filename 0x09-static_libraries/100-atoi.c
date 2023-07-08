#include "main.h"

/**
 * _atoi - Entry point
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
int signn = 1, i = 0;
unsigned int rest = 0;

while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
signn *= -1;
i++;
}
while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
{
rest = (rest * 10) + (s[i] - '0');
i++;
}
rest *= signn;
return (rest);
}
