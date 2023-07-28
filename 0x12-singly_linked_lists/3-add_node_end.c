#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temps = *head;
unsigned int lenn = 0;
while (str[lenn])
lenn++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->lenn = lenn;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (temps->next)
temps = temps->next;
temps->next = new;
return (new);
}
