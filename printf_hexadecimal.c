#include "main.h"

/**
 * printf_hex - prints an hexadecimal number.
 * @val: arguments passed.
 * Return: counter.
 */
int printf_hex(va_list val)
{
	int x;
	int *array;
	int count = 0;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (number / 16 != 0)
	{
		number /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (x = 0; x < count; x++)
	{
		array[x] = temp % 16;
		temp /= 16;
	}
	for (x = count - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 39;
		_putchar(array[x] + '0');
	}
	free(array);
	return (count);
}
