#include <stdio.h>

/**
 * main - Entry point
 * @argc: int
 * @argv: list
 * Return: Everytime 0 (success)
 */

int main(int argc, char const *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
