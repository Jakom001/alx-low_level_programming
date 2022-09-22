include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: The encoded stirng
 */
char *leet(char *s)
{
	int a = 0, b = 0, 1 = 5;
	char j[5] = {'A', 'E', 'O', 'T', '1'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < 1)
		{
			if (s[a] == j[b] || s[a] - 32 == j[b])
			{
				s[a] = n[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}
