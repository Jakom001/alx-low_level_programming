#include <stdio.h>
/**
 * main - entry point
 * Description: compites and prints even numbers less than < 4, 000, 000
 *
 * Return: 0;
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%f\n", sum);
	return (0);
}