#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: int
 * @argv: list
 * Return: Everytime 0 (succes)
 */
int main(int argc, char *argv[])
{
int num;
if (argc == 3)
{
num = atoi(argv[1] * atoi(argv[2]);
printf("%d\n", num);
}
else
{
printf("error\n");
return (1);
}
}
