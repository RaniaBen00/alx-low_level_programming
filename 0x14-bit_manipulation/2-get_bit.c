#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to search
 * @index: index of The bit
 * Return: value of The bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int get_var;
if (index > 63)
return (-1);
get_var = (n >> index) & 1;
return (get_var);
}
