#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @st: input string
 *
 * Return: the pointer to dest
 */
char *string_toupper(char *st)
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
