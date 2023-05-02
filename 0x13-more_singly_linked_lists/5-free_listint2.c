#include "lists.h"

/**
 * free_listint2 - free The linked lists.
 *
 * @head: A pointer to listint_t list TO Become free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
