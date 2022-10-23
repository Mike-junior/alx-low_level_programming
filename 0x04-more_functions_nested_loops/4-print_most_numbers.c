#include "main.h"

/**
 * print_most_numbers - print more number except 2 & 4
 * @a:
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = 0; c <= 9; c++;)
	{
		if (!(c == 2 || c == 4))
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
