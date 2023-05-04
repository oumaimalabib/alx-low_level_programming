#include "main.h"

/**
 * print_binary - the binary equivalent of the decimal num must be prented
 *
 * @n: The  num to printed .
 */
void print_binary(unsigned long int n)
{
	int O, count = 0;
	unsigned long int current;

	for (O = 63; O >= 0; O--)
	{
		current = n >> O;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
