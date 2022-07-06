#include "main.h"

/**
 * _alphabet - Prints a-z in lowercase
 * Return: returns nothing/void
 */
void _alphabet(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
