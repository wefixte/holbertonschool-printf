#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: string
 * Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	unsigned int length = 0;
	va_list ListArguments;
	int (*function)(va_list);

	va_start(ListArguments, format);

	while(*format)
	{
		if(*format == %)
		{
			format++;
			function = _getprintfunctions(format);
			
			if (function != NULL)
			{
				length = length + function(ListArguments)
			}
			
		}		
	}

	va_end(ListArguments);
}
