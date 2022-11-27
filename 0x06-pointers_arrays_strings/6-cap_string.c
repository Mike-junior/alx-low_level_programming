/**
 * cap_string -> capitalizes all words of a string
 * @x: input string/ string parameter
 * Return: the pointer to x; capitalized version of the string
 */

char *cap_string(char *x)
{

	char separator_words[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}' };
	int len = 13;
	int a = 0, i;

	while (x[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || x[a - 1] == separator_words[i])
					&& (x[a] >= 97 && x[a] <= 122))
			x[a] = x[a] - 32;
			i++;
		}
		a++;
	}
	return (x);

