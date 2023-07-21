#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
int n = 0;
char *strn, *sept = "";
va_list lst;
va_start(lst, format);
if (format)
{
while (format[n])
{
switch (format[n])
{
case 'c':
printf("%s%c", sept, va_arg(lst, int));
break;
case 'i':
printf("%s%d", sept, va_arg(lst, int));
break;
case 'f':
printf("%s%f", sept, va_arg(lst, double));
break;
case 's':
strn = va_arg(lst, char *);
if (!strn)
strn = "(nil)";
printf("%s%s", sept, strn);
break;
default:
n++;
continue;
}
sept = ", ";
n++;
}
}
printf("\n");
va_end(lst);
}
