#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: points to changed no
 * @index: index of the bit to clear
 * Return: if successful 1 else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
