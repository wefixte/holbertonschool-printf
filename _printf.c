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

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			/*put the function according to specifier, in a function pointer*/
			function = _getprintfunctions(format);

			if (function != NULL)
			{
				length = length + function(ListArguments);
			}
			else
			{
			/*if the specifier does not exist, putchar the character and %*/
				_putchar('%');
				_putchar(*format);
				length = length + 2;
			}
		}
		else
		{
		/*if character not %, and incrementation length*/
			_putchar(*format);
			length++;
		}
		format++;
	}
	va_end(ListArguments);
	return (length);
}
