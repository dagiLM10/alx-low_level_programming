#include "main.h"
#include <stddef.h>
/**
 * _memset -  fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: the number of bytes to be filled.
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b , unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
