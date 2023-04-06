#include "main.h"

/**
 * get_endiannes - Checks the endianness.
 *
 * Return: If big-endian - 0.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
