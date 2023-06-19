#include<stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet
 *
 *Return: Eachtime 0 (Success)
 */

int main(void)
{
int a;
a = 'z';
while (a <= 'z')
{
putchar(a);
a += 1;
}
putchar('\n');
return (0);
}
