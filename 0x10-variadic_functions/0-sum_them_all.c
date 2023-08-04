#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list va;
unsigned int a, sum = 0;
va_start(va, n);
for (a = 0; a < n; a++)
sum += va_arg(va, int);
va_end(va);
return (sum);
}