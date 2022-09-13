#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabets in lowercase
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; i++)
			_putchar(j);
		_putchar(j);
	}
	return (0);
}
