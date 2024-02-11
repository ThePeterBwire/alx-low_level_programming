#include "main.h"

/**
 * clear_bit - Clear the value of a bit at a given index to 0.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to clear.
 *
 * Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
