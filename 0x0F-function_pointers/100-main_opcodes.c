#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Everytime 0 (Success)
 */
int main(int argc, char *argv[])
{
int byt, a;
char *arn;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
byt = atoi(argv[1]);
if (byt < 0)
{
printf("Error\n");
exit(2);
}
arn = (char *)main;
for (a = 0; a < byt; a++)
{
if (a == byt - 1)
{
printf("%02hhx\n", arn[a]);
break;
}
printf("%02hhx ", arn[a]);
}
return (0);
}
