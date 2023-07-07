#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: int
 * @argv: list
 * Return: Everytime 0
 */
int main(int argc, char *argv[])
{
int s = 0;
char *n;
while (--argc)
{
for (n = argv[argc]; *n; n++)
if (*n < '0' || *n > '9')
return (printf("error\n"), 1);
s += atoi(argv[argc]);
}
printf("%d\n", s);
return (0);
}
