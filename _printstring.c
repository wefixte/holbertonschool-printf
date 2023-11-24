#include "main.h"

/**
 * _printstring - function that prints string
 * @ListArguments: list of arguments
 * Return: the length of the string
*/

int _printstring(va_list ListArguments)
{
	int index = 0;
	int count = 0;
	char *str;

	str = va_arg(ListArguments, char*);

	if (str == NULL)
		str = "null";

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
		count++;
	}
	return (count);
}
