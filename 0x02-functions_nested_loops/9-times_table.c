#include "main.h"

/**
 * times_table - Entry point
 * Description: Prints the 9 time table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int r, d, c;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			d = (r * c);
			if ((d / 10) > 0)
			{
			_putchar((d / 10) + '0');
			}
			else
			{
			_putchar(' ');
			_putchar(' ');
			}
		}
		-putchar('\n');
	}
}
