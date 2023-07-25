#include "main.h"
/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int number, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	number = n;

	if (last < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		lasat = -last;
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

/**
 * printf_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_dec(va_list args)
{
	int n = va_arg(args, int);
	int number, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

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
