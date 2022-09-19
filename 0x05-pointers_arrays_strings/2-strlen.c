#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: the charater
 *
 * Return: return 0 always
 */
int _strlen(char *s);
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
