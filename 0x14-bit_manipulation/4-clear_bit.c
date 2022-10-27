#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit.
 * @index: the index to set the value at, indices start at 0.
 *
 * Return: -1 if error occurs, otherwise 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
