#include "main.h"

/**
 * _getprintfunctions - search for a specifier and the function linked to it
 * @nextcharacter: the character after %, the specifier
 * Return: the function linked to the specifier or NULL
*/

int (*_getprintfunctions(const char *nextcharacter))(va_list)
{
	/*tableau structure spectifiers*/
	specifierhelp_t structformat[] = {
		{'c', _printcharacter},
		{'s', _printstring},
		{'%', _printpercent},
		{'d', _printnumbers},
		{'i', _printnumbers},
		{'\0', NULL}
	};

	int index = 0;

	/*TODO : loop in structure format to find a match & return fonction*/
	while (structformat[index].specifier != '\0')
	{
		if (*nextcharacter == structformat[index].specifier)
			return (structformat[index].function);
		index++;
	}
	return (NULL);
}
