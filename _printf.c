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
			else
			{
			/*TODO: cas normal où il faut putchar le character si le specifiers n'existe pas*/
			}
		}
		else
		{
		/*TODO: cas où il faut juste afficher le caractère qui n'est pas un specifier*/
		/*and incrementer length*/
		}
		format++;
	}
	va_end(ListArguments);
	return (length);
}
