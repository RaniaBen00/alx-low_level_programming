#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string containing the binary number
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int bin_var = 0;
if (!b)
return (0);
for (a = 0; b[a]; a++)
{
if (b[a] < '0' || b[a] > '1')
return (0);
bin_var = 2 * bin_var + (b[a] - '0');
}
return (bin_var);
}
