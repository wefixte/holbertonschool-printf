#ifndef MAIN_H
#define MAIN_H

/*Library functions*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/*Structure*/
/**
 * struct specifier_structure - structure for specifier characters
 * @specifier: character
 * @function: function pointer to the adequate function
*/

typedef struct specifier_structure
{
	char specifier;
	int (*function)(va_list);
		/* data */
} specifierhelp_t;

/*Prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);
int _printcharacter(va_list ListArguments);
int _printpercent(va_list ListArguments);
int _printstring(va_list ListArguments);
int (*_getprintfunctions(const char *nextcharacter))(va_list);
int _printnumbers(va_list ListArguments);

#endif
