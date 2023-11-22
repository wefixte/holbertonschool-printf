#include "main.h"

/**
 * _printnumbers - function that print numbers
 * @ListArguments: list of variadic arguments
 * Return: length of the number
*/

int _printnumbers(va_list ListArguments)
{
	number = va_arg(ListArguments, int);

	/*Special case: if number is 0*/
	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	/*TODO: Special case : if number negative */
}
