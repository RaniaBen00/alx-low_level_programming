#include"main.h"

/**
 * _isalpha - checks if character is a letter, lowercase or uppercase
 *
 * @c: takes input from other functions
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
if (c >= 'A' && c <= 'Z')
	return (0);
}

