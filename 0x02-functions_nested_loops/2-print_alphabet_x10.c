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

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			putchar(j);
			j++;
		}
		putchar('\n');
		i++;
	}
	putchar('\n');
	return (0);
}
