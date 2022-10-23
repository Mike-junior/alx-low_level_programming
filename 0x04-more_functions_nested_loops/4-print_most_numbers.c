#include "main.h"

/**
 * print_most_numbers - print more number except 2 & 4
 * @a:
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++;)
	{
		if (i != 2 || i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
