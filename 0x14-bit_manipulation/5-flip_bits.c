#include "main.h"

/**
 * flip_bits - Entry Point
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: Number of bits To change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a, cont = 0;
unsigned long int present;
unsigned long int obsesside = n ^ m;
for (a = 63; a >= 0; a--)
{
present = obsesside >> a;
if (present & 1)
cont++;
}
return (cont);
}
