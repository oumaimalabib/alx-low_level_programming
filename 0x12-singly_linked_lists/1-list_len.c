#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns num  of elements in a linked list
 * @A: a pointer
 *
 * Return: The num of elements in A
 */
size_t list_len(const list_t *A)
{
size_t n = 0;

while (A)
{
n++;
A = A->next;
}
return (n);
}
