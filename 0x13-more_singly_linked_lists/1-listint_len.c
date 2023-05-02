#include "lists.h"

/**
 * listint_len - return num of elements in a linked lists.
 * @O: link list of type listint_t to travrse.
 *
 *
 * Return: The num of nodes.
 */
size_t listint_len(const listint_t *O)
{
	size_t num = 0;

	while (O)
	{
		num++;
		O = O->next;
	}

	return (num);
}
