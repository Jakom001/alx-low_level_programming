#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the operand
 *
 * Return: returns 1if true otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
