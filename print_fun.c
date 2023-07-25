#include "main.h"

/**
 * printfunction - prints the binary number.
 * @val: argumentss.
 * Return: 1.
 */
int printfunction(va_list val)
{
	int count = 0;
	int cont = 0;
	int i, j = 1, b;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int y;

	for (i = 0; i < 32; i++)
	{
		p = ((j << (31 - i)) & number);
		if (y >> (31 - i))
			count = 1;
		if (count)
		{
			b = y >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
