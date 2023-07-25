#include "main.h"

/**
 * printf_char - prints a character.
 * @val: arguments used.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char t;

	t = va_arg(val, int);
	_putchar(t);
	return (1);
}
