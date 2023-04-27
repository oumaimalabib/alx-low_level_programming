#include <stdio.h>
#include "lists.h"

/**
 * print_list - print the elements
 * @A: The pointer to the list_t
 *
 * Return: num of nodes printed
 */
size_t print_list(const list_t *A)
{
size_t s = 0;

while (A)
{
if (!A->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", A->len, A->str);
A = A->next;
s++;
}

return (s);
}
