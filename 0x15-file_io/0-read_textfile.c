#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- Actual number Of bytes read And printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *func;
ssize_t px;
ssize_t w;
ssize_t p;
px = open(filename, O_RDONLY);
if (px == -1)
return (0);
func = malloc(sizeof(char) * letters);
t = read(px, func, letters);
w = write(STDOUT_FILENO, func, p);
free(func);
close(px);
return (w);
}
