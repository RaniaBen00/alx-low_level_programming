#include "main.h"

/**
 * append_text_to_file - Entry Point.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If The function fails Or filename is NULL - -1.
 *         If The file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int m, w, lent = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (lent = 0; text_content[lent];)
lent++;
}
m = open(filename, O_WRONLY | O_APPEND);
w = write(m, text_content, lent);
if (m == -1 || w == -1)
return (-1);
close(m);
return (1);
}
