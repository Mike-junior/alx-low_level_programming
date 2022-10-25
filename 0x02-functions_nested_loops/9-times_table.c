#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int number, multiplyBY, product;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multiplyBY = 1; multiplyBY <= 9; multiplyBY++)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multiplyBY;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
