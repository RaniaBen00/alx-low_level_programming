#include"main.h"

/**
 * _islower - function to check if character is lowercase
 *
 * @c: checksinput of function
 *
 * Return: return 1 if 'c' is lowercase, otherwise 0 (Success)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
