#include "lists.h"

/**
 * add_nodeint - add a newe node in The begining of The linked list.
 * @head: pointer to a first node in a list.
 * @n: data.
 *
 *
 * Return: A pointer to The new node, also NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
