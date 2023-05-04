#include "main.h"

/**
 * get_bit - returns the value in a decimal num.
 * @n: The num to searching.
 *
 * @index: index.
 *
 * Return:The  value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
