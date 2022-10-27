#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src imcluding the x
 *  nul byte, to the end of string pointed by @dest
 * @dest: A pointer tk the string to be concatenated upon
 * @src: The source string to be appended @dest
 * Return: A pointer to the destination string @dest
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
