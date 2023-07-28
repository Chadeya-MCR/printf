#include "main.h"
<<<<<<< HEAD
=======
#include <stdarg.h>
>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd

/**
 * printf_HEX_aux - prints an hexgecimal number.
 * @num: number to print.
 * Return: counter.
 */
<<<<<<< HEAD
int printf_HEX_aux(unsigned int num)
=======
int printf_HEX_aux(unsigned int number)
>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd
{
	int i;
	int *array;
	int counter = 0;
<<<<<<< HEAD
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
=======
	unsigned int temp = number;

	while (number / 16 != 0)
	{
		number /= 16;
>>>>>>> 4e17a83f18ed6a8dc901e932a8b07ac12f1eb1bd
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
}
