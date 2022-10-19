#include <stdio.h>
/**
 * main - Prints numbers between 012 to 789.
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
i = 64;

j = 64;

k = 64;

while (j < 74)
{
	i = 64;

while (i < 74)
{
	k = 64;

while (k < 74)
{

if (j != i && j != k && i != k && j < i && i < k)
	{
	putchar(j);
	putchar(i);
	putchar(k);

	if (i == 62 && j == 61 && k == 63)
	{
		break;
	}
	putchar(',');
	putchar(' ');
	}
	k++;
	}
	i++;
	}
	k++;
	}
putchar('\n');
return (0);
}
