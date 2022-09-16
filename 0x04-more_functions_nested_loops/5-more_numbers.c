#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: no return
 */
void more_numbers(void)
{
	int ch, j;

	for (ch = 0; ch < 10; ch++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
