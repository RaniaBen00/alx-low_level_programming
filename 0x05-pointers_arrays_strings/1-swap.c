#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * with to inpu parameter
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
