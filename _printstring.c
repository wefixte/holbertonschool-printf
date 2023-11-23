#include "main.h"

/**
 * _printstring - function that prints string
 * @ListArguments: list of arguments
 * Return: the length
*/
int _printstring(va_list ListArguments)
{
    int index, count = 0;
    char *str;
    
    index = 0;
    str = va_arg(ListArguments, char*);
    if(str == NULL)
        str = "null";
    while (str[index]!= '\0')
    {
            _putchar(str[index]);
            index++;
            count++;//IT COUNTS THE LENGTH OF STR//
    }
        return(count);
        
}
