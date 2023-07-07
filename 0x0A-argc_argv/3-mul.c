#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: int
 * @argv: list
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
int rst, n1, n2;
if (argc < 3 || argc > 3)
{
printf("error\n");
return (1);
}
n1 = _atoi(argv[1]);
n2 = _atoi(argv[2]);
rst = n1 *n2;
printf("%d\n", rst);
return (0);
}
