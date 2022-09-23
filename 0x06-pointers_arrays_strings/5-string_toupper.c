#include "main.h"

/**
 * string_toupper - a function that changes all lower of a string to upper
 * @x: input string
 * Return: capitialized string
 */
char *string_toupper(char *x)
{
	int y;

	for (y = 0; x[y] != '\0'; y++)
	{
		if (x[y] >= 'a' && x[y] <= 'z')
			x[y] = x[y] - 32;
	}
	return (n);
}
