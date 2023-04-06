#include "main.h"

/**
 * get_endiannes - Checks the endianness.
 *
 * Return: If big-endian - 0.
 */

int get_endianness(void);
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
