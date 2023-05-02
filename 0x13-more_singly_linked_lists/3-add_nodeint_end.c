#include "lists.h"

/**
 * add_nodeint_end - add The node in the end of a The linked list.
 *
 * @head: A pointer to the first element at the list.
 * @n: data.
 *
 * Return: A pointer to The new node, Also  NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
