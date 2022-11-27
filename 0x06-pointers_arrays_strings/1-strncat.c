#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: amount of bytes usedfrom src
 * Return: thepointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
/** this still works
  *strncat(dest, src, n);
  *return (dest);
  *nb ; the string.h must be included in this case.
  */

	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
