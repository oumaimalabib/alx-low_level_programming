#include "main.h"

/**
 * flip_bits - it will count the num of bits to change
 *
 * @n: its the first num.
 *
 * @m:its the second num.
 *
 * Return: num of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int O, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (O = 63; O >= 0; O--)
	{
		current = exclusive >> O;
		if (current & 1)
			count++;
	}

	return (count);
}
