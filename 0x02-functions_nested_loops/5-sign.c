#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number of the sign to be printed
 * Return: 1 if the number is greater than 0
 * 0 if number is 0
 * -1 if number is less than 0
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test)
}
