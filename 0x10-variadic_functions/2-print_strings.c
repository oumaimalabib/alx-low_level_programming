#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - fucntion thqt prints strings, qnd is follozed by a new line.
* @separator: The string between the strings.
* @n: The number of strings added the function.
* @...: A variable num of strings that should be printed.
* Description: If separator is NULL, the seperator is not printed.
*              If one of the strings if NULL, (nil) is printed in its place.
*/
	void print_strings(const char *separator, const unsigned int n, ...)
	{
		va_list strings;
		char *str;
		unsigned int index;


		va_start(strings, n);


		for (index = 0; index < n; index++)
		{
			str = va_arg(strings, char *);


			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);


			if (index != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(strings);
	}
