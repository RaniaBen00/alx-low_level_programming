#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: Everytime 0 (success)
 */
void print_chessboard(char (*a)[8])
{
int n;
int i;
for (n = 0; n < 8; n++)
{
for (i = 0; i < 8; i++)
_putchar(a[n][i]);
_putchar('\n');
}
}
