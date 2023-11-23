#include "main.h"

/**
 * _printcharacter - function that prints character
 * @ListArguments: list of arguments
 * Return: the length
*/

int _printcharacter(va_list ListArguments)
{
	char character;

	character = va_arg(ListArguments, int);
	_putchar(character);
	return (1);
}
