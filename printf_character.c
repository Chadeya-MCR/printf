#include "main.h"

/**
 * printf_character - prints a character.
 * @val: arguments used.
 * Return: 1.
 */
int printf_character(va_list val)
{
	char t;

	t = va_arg(val, int);
	_putchar(t);
	return (1);
}
