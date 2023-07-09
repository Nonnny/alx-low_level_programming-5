#include "main.h"

/**
 * get_bit - value of a bit at an index in a decimal no
 * @n: no to search
 * @index: index of the bit
 * Return_ value of the bit index else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}