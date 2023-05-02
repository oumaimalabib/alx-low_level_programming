#include "lists.h"

/**
 * sum_listint - it calculate The sum of the data.
 *
 * @head: The first node
 *
 * Return: result of sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
