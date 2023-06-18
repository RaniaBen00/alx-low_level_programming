#include <stdio.h>
/**
 * main - A program that prints the size of various on the computer types
 * Return: 0 (seccess)
 */
int main(void)
{
	char n;
	int i;
	long int x;
	long long int y;
	float f;
printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(n));
printf("size of an int: %lu byte(s)\n",(unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n",(unsigned long)sizeof(x));
printf("size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(y));
printf("size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
return (0);
}
