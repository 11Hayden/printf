#include "main.h"

/**
 * print_str - prints a variadic string each per time to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed on Success
 * upon failure -1
 */

int print_str(va_list args)
{
	int count = 0;
	char *str;
	char null[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (; null[count] != '\0'; count++)
			_putchar(null[count]);
		return (6);
	}
	for (; str[count] != '\0'; count++)
		_putchar(str[count]);
	return (count);
}
