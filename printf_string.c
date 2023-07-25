#include "main.h"
#include <stddef.h>
/**
 * printf_exclusive_string - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_exclusive_string(va_list val)
{
	char *s;
	int i, length = 0;
	int j;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			j = s[i];
			if (j < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + printf_HEX_aux(j);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}
	return (length);
}
