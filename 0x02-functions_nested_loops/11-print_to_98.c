#include "main.h"

/**
 * print_to_98 - entry point
 * Description: prints all natural numbers
 * @n: natural numbers
 *
 * Return: always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
