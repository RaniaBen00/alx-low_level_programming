#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Entry Point
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int *pnt;
int i, Size;
if (min > max)
return (NULL);
Size = max - min + 1;
pnt = malloc(sizeof(int) * Size);
if (pnt == NULL)
return (NULL);
for (i = 0; min <= max; i++)
pnt[i] = min++;
return (pnt);
}
