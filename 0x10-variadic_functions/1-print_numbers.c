#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Entry Point
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numbs;
unsigned int var;
va_start(numbs, n);
for (var = 0; var < n; var++)
{
printf("%d", va_arg(numbs, int));

if (var != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(numbs);
}
