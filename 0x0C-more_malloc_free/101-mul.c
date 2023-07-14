#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - Entry Point
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
int n = 0;
while (s[i])
{
if (s[n] < '0' || s[n] > '9')
return (0);
n++;
}
return (1);
}
/**
 * _strlen - Entry Point
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
int n = 0;
while (s[n] != '\0')
{
n++;
}
return (n);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *a1, *a2;
int cat1, cat2, cat, i, carry, digit1, digit2, *final, a = 0;
a1 = argv[1], a2 = argv[2];
if (argc != 3 || !is_digit(a1) || !is_digit(a2))
errors();
cat1 = _strlen(a1);
cat2 = _strlen(a2);
cat = cat1 + cat2 + 1;
final = malloc(sizeof(int) * cat);
if (!result)
return (1);
for (i = 0; i <= cat1 + cat2; i++)
final[i] = 0;
for (cat1 = cat1 - 1; cat1 >= 0; cat1--)
{
digit1 = a1[cat1] - '0';
carry = 0;
for (cat2 = _strlen(s2) - 1; cat2 >= 0; cat2--)
{
digit2 = a2[cat2] - '0';
carry += final[cat1 + cat2 + 1] + (digit1 *digit2);
final[cat1 + cat2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
final[cat1 + cat2 + 1] += carry;
}
for (i = 0; i < cat - 1; i++)
{
if (final[i])
a = 1;
if (a)
_putchar(final[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(final);
return (0);
}
