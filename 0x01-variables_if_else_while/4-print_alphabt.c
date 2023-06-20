#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Eachtime 0 (Success)
 */

int main(void)
{
int a = 'b';
while (a <= 'z')
{
if (a == 'e' || a == 'q')
{
a += 1;
}
else
{
putchar(a);
a += 1;
}
}
putchar('\n');
return (0);
}
