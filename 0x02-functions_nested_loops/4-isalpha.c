#include "main.h"

/**
 * _isalpha - Entry point
 * Description: checks for an alphabet
 * @c: the character tobe return
 *
 * Return: 1 if true or 0 if false
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
