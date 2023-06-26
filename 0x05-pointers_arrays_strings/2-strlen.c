#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 *
 * @s: string parameter input
 * Return: length of a string
 */
int _strlen(char *s)
{
int cnt
for (cnt = 0; *s != '\0'; s++)
	++cnt;
return (cnt);
}
