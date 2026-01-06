# *This project has been created as part of the 42 curriculum by pmawusi.*

# ft_printf

## Description

This project is a personal implementation of the standard C library printf function.
Its purpose is to understand how formatted output works by parsing a format string and handling a variable number of arguments.
This version does not include the internal buffer management of the original printf.

## Instructions

A Makefile is provided for compilation and testing.

* make — compiles all source files
* make test — compiles using the test rule included in the Makefile
* make clean — removes object files
* make fclean — removes object files and the final program

To test the project, you must write your own main.c, unless you use make test, which compiles with the built-in test scenario.

## Algorithm & Technical Choices

The program reads the format string from start to finish.
When a % character is encountered, the next character is treated as a format specifier.
Arguments are retrieved using va_list, and each supported specifier is handled by a dedicated function.
Output is written directly using write(), and no dynamic memory allocation or buffering is used.

## Resources

* GeeksForGeeks
* *C for Dummies*
* Official C documentation / man pages
* ChatGPT — used only for clarifying theoretical concepts like variadic functions and format parsing.
