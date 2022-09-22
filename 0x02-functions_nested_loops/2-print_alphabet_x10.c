#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet.
 * 
 * Return: none
 */
void print_alphabet_x10(void);
{
	int x;
	int n = 0;

	while(n < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x += 1;
		}
		_putchar(10);
		n += 1;
	}
}
