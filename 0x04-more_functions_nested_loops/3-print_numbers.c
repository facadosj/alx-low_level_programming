#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 * without 2 and 4
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
