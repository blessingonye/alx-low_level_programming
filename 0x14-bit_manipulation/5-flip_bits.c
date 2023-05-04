#include "main.h"

/**
 * flip_bits - a function that returns the num of bits you would need to flip
 * to get from one num to another
 * @n: first num
 * @m: second num
 *
 * By blessing for alx project
 *
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
