#include "main.h"
<<<<<<< HEAD
=======
#include <stdarg.h>

>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd
/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
<<<<<<< HEAD
int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;
=======

int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int number, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	number = n;
>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd

	if (last < 0)
	{
		_putchar('-');
<<<<<<< HEAD
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
=======
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
>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd
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
<<<<<<< HEAD
	int num, last = n % 10, digit;
=======
	int number, last = n % 10, digit;
>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd
	int  i = 1;
	int exp = 1;

	n = n / 10;
<<<<<<< HEAD
	num = n;
=======
	number = n;
>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd

	if (last < 0)
	{
		_putchar('-');
<<<<<<< HEAD
		num = -num;
=======
		number = -number;
>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd
		n = -n;
		last = -last;
		i++;
	}
<<<<<<< HEAD
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
=======
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
>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
