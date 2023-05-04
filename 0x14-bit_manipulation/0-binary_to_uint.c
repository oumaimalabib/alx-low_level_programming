#include "main.h"

/**
 * binary_to_uint - transform the  binary num to unsigned int
 *
 * @b: is a string containing the binary num.
 *
 * Return: the num convertd
 */
unsigned int binary_to_uint(const char *b)
{
	int O;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (O = 0; b[O]; O++)
	{
		if (b[O] < '0' || b[O] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[O] - '0');
	}

	return (dec_val);
}
