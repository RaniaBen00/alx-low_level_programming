#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
char *strl;
unsigned int i;
strl = malloc(sizeof(char) * size);
if (size == 0 || strl == NULL)
return (NULL);
for (i = 0; i < size; i++)
strl[i] = c;
return (strl);
}
