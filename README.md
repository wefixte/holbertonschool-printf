# <p align="center">_printf function</p>

## Description
As developers, we often take printf() for granted. By coding a replicate of the function, this project offers insights into the specifiers conversion, string formatting, argument passing, function pointers...

## Requirements

- All your files should end with a new line
- Your code should use the Betty style
- No more than 5 functions per file
- Global variables are not allowed
- The prototypes of all your functions should be included in your header file called main.h
- All your files will be compiled on Ubuntu 20.04 LTS using gcc

## The project
### Flowchart

![](https://i.imgur.com/VQ8bIbg.jpg)

### Conversion specifiers


| Specifiers| Description| Function name|
| -------- | -------- | -------- |
| c   |  print a character    | _printcharacter    |
| s    | print a string   | _printstring    |
| %    | print a %  | _printpercent   |
| i | print an integer | _printnumbers |
| d | print a deciman | _printnumbers |

### Compilation command
This project can be compiled using a standard C compiler. You can use this command :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
### Man page

```
man man_3_printf
```

### Exemples

```
_printf("Hello World!");
// print: Hello World!

_printf("%c is fun", C)
// print: C is fun
```

## Credits

- Cassandre Pernelle : [Github](https://github.com/wefixte)
- Carmen Leila Mugisha : [Github](https://github.com/CarmenLeila)

Copyright (c) 2023 **Cassandre PERNELLE & Carmen Leila MUGISHA**
