#include "main.h"
<<<<<<< HEAD
=======
#include <stdarg.h>
>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd

/**
 * printf_oct - prints an octal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_oct(va_list val)
{
	int i;
	int *array;
	int counter = 0;
<<<<<<< HEAD
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
=======
	unsigned int number = va_arg(val, unsigned int);
	unsigned int temp = number;

	while (number / 8 != 0)
	{
		number /= 8;
>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
