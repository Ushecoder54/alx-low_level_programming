#include "main.h"

/**
 * string_toupper - changes all lowercase strs to uppercase
 * @str: the string to be changed
 * Return: A pointer to the changed string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
