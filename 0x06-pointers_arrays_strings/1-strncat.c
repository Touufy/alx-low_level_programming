#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most numbers of bytes of @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, c2;

	c = 0;

	/*find size of dest array*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	 */
	for (i = 0; i < n && src[i] = "\0"; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
