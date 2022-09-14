#include "main.h"

/**
 * _islower - Entry point
 * Description: checks the lowercase character
 * @c: - the integer to be checked
 *
 * Return:return 1 if is lowercase othewise return 0
 */
int _islower(int c)
{
	int i = 97;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
