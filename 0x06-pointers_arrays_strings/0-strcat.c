#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including x
 * @dest: A pointer to the string to be concateated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to destination tring @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
