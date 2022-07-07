#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Null, Void
 */
void times_table(void)
{
	int mm, nn, mul;

	for (mm = 0; mm <= 9; mm++)
	{
		for (nn = 0; nn <= 9; nn++)
		{
			mul = mm * nn;
			if (nn == 0)
				_putchar('0' + mul);
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar('0' + mul);
			}
			else
			{
				_putchar('0' + mul / 10);
				_putchar('0' + mul % 10);
			}
			if (nn < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
