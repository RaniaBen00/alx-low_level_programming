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
printf("size of a char: %1u byte(s)\n",(unsigned long)sizeof(n));
printf("size of an int: %1u byte(s)\n",(unsigned long)sizeof(i));
printf("size of a long int: %1u byte(s)\n",(unsigned long)sizeof(x));
printf("size of a long long int: %1u byte(s)\n",(unsigned long)sizeof(y));
printf("size of a float: %1u byte(s)\n",(unsigned long)sizeof(f));
return (0);
}
