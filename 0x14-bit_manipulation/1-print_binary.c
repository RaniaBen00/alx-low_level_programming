#include "main.h"

/**
 * print_binary - Entry Point
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int a, cont = 0;
unsigned long int present;
for (a = 63; a >= 0; a--)
{
present = n >> a;
if (present & 1)
{
_putchar('1');
cont++;
}
else if (cont)
_putchar('0');
}
if (!cont)
_putchar('0');
}
