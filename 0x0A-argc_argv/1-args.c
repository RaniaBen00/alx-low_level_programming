#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: pointer to an array of command line arguments
 * Return: Everytime 0 (success)
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}

