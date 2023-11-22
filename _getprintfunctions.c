#include "main.h"

/**
 * _getprintfunctions - search for a specifier and the function linked to it
 * 
 * Return: the function linked to the specifier or NULL
*/

int (*getprintfunctions(char *nextcharacter))(va_list)
{
	/*tableau structure spectifiers*/
	specifierhelp_t structformat[] = {
		{'c', _printcharacter},
		{'s', _printstring},
		{'%', _printpercent},
		{'\0', NULL}
	}

	while
	{
		/*TODO : boucler dans la structure format pour trouver un match et return la fonction*/
		if()
		{

		}
		else
			return (NULL);
	}
}
