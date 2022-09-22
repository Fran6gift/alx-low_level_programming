#include "main.h"

/**
 *  print_alphabet - a function that prints the alphabet, in lowercase.
 *
 *  Return: nothing
 */
void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
			x += 1;
	}
	_putchar(10);
}
