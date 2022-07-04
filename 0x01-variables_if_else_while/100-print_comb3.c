#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Exit status is 0 (if success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (j == 57 && i == 56)
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
