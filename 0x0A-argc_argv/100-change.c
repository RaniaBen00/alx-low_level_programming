#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of commandline arguments
 * @argv: pointer to an array of commandline arguments
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
int num, i, rst;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
	printf("error\n");
	return (1);
}
num = atoi(argv[1]);
rst = 0;
if (num < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5 && num >= 0; i++)
{
while (num >= coins[i])
{
rst++;
num = coins[i];
}
}
printf("%d\n", rst);
return (0);
}
