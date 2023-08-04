#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 big, 1 little
 */
int get_endianness(void)
{
unsigned int a = 1;
char *h = (char *) &a;
return (*h);
}
