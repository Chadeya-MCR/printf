#include "main.h"
#include <stdarg.h>

/**
 * printf_unsigned - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int number, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	number = n;

	if (last < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		last = -last;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = n;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			number = number - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
