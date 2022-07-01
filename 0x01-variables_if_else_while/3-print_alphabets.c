#include <stdio.h>

/**
 * main - Prints a-zA-Z to standard output
 * Return: Exit status is zero means success
 */
int main(void)
{
	int i;
	
	for (i = 97; i <= 122; i++)
		putchar(i);
	for (i = 65; i <= 90; i++)
		putchar(i);
	putchar('\n');	
	return (0);
}
