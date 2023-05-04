#include "main.h"

/**
 * clear_bit - the value of a given bit 0
 * @n:is a pointer the number to change.
 *
 * @index: index.
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
