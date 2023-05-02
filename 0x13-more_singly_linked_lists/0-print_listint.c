#include "lists.h"

/**
 * print_listint - print the elements of a linked list.
 * @O: linked a list of type listint_t to print.
 *
 *
 * Return: The num of nodes
 */
size_t print_listint(const listint_t *O)
{
	size_t num = 0;

	while (O)
	{
		printf("%d\n", O->n);
		num++;
		O = O->next;
	}

	return (num);
}
