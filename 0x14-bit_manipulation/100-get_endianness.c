#include "main.h"

/**
 * get_endianness - check if a machine little or big.
 * Return: 0 for big, 1 for little
 *
 */
int get_endianness(void)
{
	unsigned int O = 1;
	char *c = (char *) &O;

	return (*c);
}
