#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - program that copies the content of a file to another file.
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer To The newly-allocated buffer.
 */
char *create_buffer(char *file)
{
char *buff;
buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buff);
}

/**
 * close_file - Closes the file.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
int cl;
cl = close(fd);
if (cl == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Copies the file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0.
 * Description: If The argument count is incorrect - exit code 97.
 * If file_from does Not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to Or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int From, To, RD, w;
char *buff;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buff = create_buffer(argv[2]);
From = open(argv[1], O_RDONLY);
RD = read(From, buff, 1024);
To = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (From == -1 || RD == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}
w = write(To, buff, RD);
if (To == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}
RD = read(From, buff, 1024);
To = open(argv[2], O_WRONLY | O_APPEND);
} while (RD > 0);
free(buff);
close_file(from);
close_file(To);
return (0);
}
