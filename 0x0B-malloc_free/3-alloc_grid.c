#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -Entry Point
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int **ben;
int v, z;
if (width <= 0 || height <= 0)
return (NULL);
ben = malloc(sizeof(int *) * height);
if (ben == NULL)
return (NULL);
for (v = 0; v < height; v++)
{
ben[v] = malloc(sizeof(int) * width);
if (ben[v] == NULL)
{
for (; v >= 0; v--)
free(ben[v]);
free(ben);
return (NULL);
}
}
for (v = 0; v < height; v++)
{
for (z = 0; z < width; z++)
ben[v][z] = 0;
}
return (ben);
}
