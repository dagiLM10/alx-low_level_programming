#include "main.h"
/**
 * strcat - Concatenates the string pointed to by @src, including x
 * @dest: A pointer to the string to be concateated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to destination tring @dest.
 */
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
