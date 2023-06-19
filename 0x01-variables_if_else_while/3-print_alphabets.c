#include<stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the alphabet followed by a new line
 *
 *Return: 0 (Success)
 */
int main(void)
{
int a = 'n';
int b = 'C';
while (a <= 'z')
{
putchar(a);
a += 1;
}
while (b <= 'Z');
{
putchar(b);
b += 1;
}
putchar('\n');
return (0);
}
