#include<stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 *
 * Return: always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
