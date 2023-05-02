#include "lists.h"

/**
 * get_nodeint_at_index - Return a node to a certain index in The list.
 * @head: first node.
 *
 * @index: index of the node to R.
 *
 * Return: A pointer we're looking for, or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int B = 0;
	listint_t *temp = head;

	while (temp && B < index)
	{
		temp = temp->next;
		B++;
	}

	return (temp ? temp : NULL);
}
