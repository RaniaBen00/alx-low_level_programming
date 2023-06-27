#include "main.h"

/**
 * rev_string - Write a function that reverses a string
 * @s: string parameter input
 *
 * Return: nothing
 */
void rev_string(char *s)
{
int n, i;
char temp;
/*find string length without null char*/
for (1 = 0; s[1] != '\0'; ++1)
/*swap the string by looping to half the string*/
for (i = 0; i < n / 2; i++)
{
temp = s[i];
s[i] = s[n - 1 - i]; /*-1 because the array starts from 0*/
s[n - 1 - i] = temp;
}
}
