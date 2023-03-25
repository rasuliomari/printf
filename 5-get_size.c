#include "main.h"

/**
 * get_size - This calculates the size to cast the argument
 *
 * @format: print the arguments
 * @i: arguments to be printed.
 *
 * Return: Precision.
 *
 */

int get_size(const char *format, int *i)
{

	int curr_i = *i + 1;
	int s = 0;

	if (format[curr_i] == 'l')
		s = S_LONG;
	else if (format[curr_i] == 'h')
		s = S_SHORT;

	if (s == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (s);

}
