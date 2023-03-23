#include "main.h"
/**
 * poaitive_or_negative - checks for positive or negative numbers
 *
 * @i: the number to be checked
 *
 * Return: Always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	if (i > 0)
		printf("%d is positive", i);
	else
		printf("%d is zero\n", i);
}
