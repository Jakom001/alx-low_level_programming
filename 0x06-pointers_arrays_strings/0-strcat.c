#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: firts string
 * @src: second string
 *
 * Return: the string
 */
char *_strcat(char *dest, char *src)
{
	int j = 0, i;

	while (dest[j])
	{
		j++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '0';
	return (dest);
}
