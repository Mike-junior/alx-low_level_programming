#include <stdio.h>
/**
 * main - Prints numbers between 00 to 89.
 *
 * Description -  prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{

	int j, k;

	j = 48;
	k = 48;

	while (k < 58)
	{
		j = 48;

		while (j < 58)
		{
			if (k != j && k < j)
			{
				putchar(k);
				putchar(j);

			if (j == 57 && k == 56)
			{

				break;

			}

				putchar(',');
				putchar(' ');

			}

			j++;
		}

		k++;
	}

	putchar('\n');

	return (0);

}
