#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all decimal numbers
 * Return: Exit status is zero means success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		ptintf("%d", i);
	printf('\n');

	return (0);
}
