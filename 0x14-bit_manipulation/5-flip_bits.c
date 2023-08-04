#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you would need to flip
 *to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
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
