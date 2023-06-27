#include "main.h"

/**
 * *_strcpy -  function that copies the string pointed to by src
 * @dest: char type string
 * @src: char type dtring
 * Description:  copies the string pointed to by 'src'
 * to the buffer pointed to by 'dest'
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int a = -1;
do {
a++;
dest[a] = src[a];
} while (src[a] != '\0');
return (dest);
}
