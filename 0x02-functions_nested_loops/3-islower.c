#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: The character to be checked
 * Return: Return 1 if character is lower and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
