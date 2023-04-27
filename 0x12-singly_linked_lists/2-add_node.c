#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: its a double pointer
 * @str: a new string.
 *
 * Return: an a address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int ln = 0;

while (str[ln])
ln++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->ln = ln;
new->next = (*head);
(*head) = new;

return (*head);
}
