#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * starting from 00:00 to 23:59.
 *  Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while(i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j += 1;
		}
	i += 1;
	}
}
