#include "main.h"

/**
 * set_bit - a function sets a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: index of the bit starting from 0 of the bit you want to set
 *
 * By blessing for alx project
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
