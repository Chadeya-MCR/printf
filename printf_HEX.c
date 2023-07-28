#include "main.h"
<<<<<<< HEAD
=======
#include <stdarg.h>
>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd

/**
 * printf_HEX - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
<<<<<<< HEAD
int printf_HEX(va_list val)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
=======
int printf_HX(va_list hex)
{
int i;
int *array;
int counter = 0;
unsigned int num1 = va_arg(val, unsigned int);
unsigned int temp = num1;

while (number / 16 != 0)
{
number /= 16;
counter++;
}
counter++;
array = malloc(counter * sizeof(int));

for (i = 0; i < counter; i++)
{
array[i] = temp % 16;
temp /= 16;
}
for (i = counter - 1; i >= 0; i--)
{
if (array[i] > 9)
array[i] = array[i] + 7;
_putchar(array[i] + '0');
}
free(array);
return (counter);
>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd
}
