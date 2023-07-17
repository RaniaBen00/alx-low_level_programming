#include <stdio.h>

/**
 * main - Write a program that prints the name of the file it was compiled from, followed by a new line.
 *
 * Return: Everytime 0 (Success)
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
