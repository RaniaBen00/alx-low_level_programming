#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *of a square matrix of integers
 * @a: input
 * @size: input
 * Return: Everytime 0 (success)
 */
void print_diagsums(int *a, int size)
{
int s1, s2, t;
s1 = 0;
s2 = 0;
for (t = 0; t < size; y++)
{
s1 = s1 + a[t * size + t];
}
for (t = size - 1; t >= 0; t--)
{
s2 += a[t * size + (size - t - 1)];
}
printf("%d, %d\n", s1, s2);
}
