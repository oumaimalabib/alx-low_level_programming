#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node .
 *
 * @head: A pointer to first node .
 *
 * @idx: index where is a new node added
 *
 * @n: the data to insert.
 *
 * Return: A pointer to new node and  NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int B;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (B = 0; temp && B < idx; B++)
	{
		if (B == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
