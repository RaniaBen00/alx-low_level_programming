#include"main.h"

/**
 * print_alphabet - function that prints 10 times the alphabe
 * followed by new line
 *
 */

void print_alphabet_x10(void)
{
int Line, letter;
for (Line = 0; Line <= 9; Line++)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}
