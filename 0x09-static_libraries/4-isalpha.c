#include "main.h"

/**
 * _isalpha - Check for alphabet characters
 * @c: This is an ASCII character
 *
 * Return: 0 if not an alphabet, 1 if alphabet
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
