#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * by blessing for alx project
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
