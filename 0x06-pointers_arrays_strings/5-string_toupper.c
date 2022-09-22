#include "main.h"

/**
 * string_touper - changes all lowercase letters of a string to uppercase
 * @st: input string
 *
 * Return: the pointer to dest
 */
char *string_touper(char *st)
{
	int j = 0;

	while (*(st + j) != '\0')
	{
		if ((*(st + j) >= 97) && (*(st + j) <= 122))
			*(st + j) = *(st + j) - 32;
			j++;
	}
	return (st);
}
