#include "main.h"

/**
 * rot13 - This implements the rot13 cipher algorithm
 * @s: string to be ciphered
 *
 * Return: The ciphered string
 */
char *rot13(char *s)
{
	int i, j;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cipher[] = "nopqrstuvwxyabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = cipher[j];
				break;
			}
		}
	}
	return (s);
}
