#include "main.h"

/**
 * print_pointer -this function  prints a pointer
 * @p: pointer to be printed
 *
 * Return: number of characters printed
 */
int print_pointer(void *p)
{
	int chars_printed = 0;

	chars_printed += print_string("0x");
	chars_printed += print_odh('x', (unsigned long int)p);
	return (chars_printed);
}
