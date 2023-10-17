#include "main.h"

/**
 * _strlen - prints the length of a string(text)
 * @txt: string to be counted
 *
 * Return: length of string
 */

int _strlen(char *txt)
{
	int i = 0;

	while (txt[i] != 0)
		i++;

	return (i);
}

/**
 * handle_r_fmt - prints string(text) in reverse
 * @ap_r: string to printed, passed as variadic function
 *
 * Return: length of printed string
 */

int handle_r_fmt(va_list ap_r)
{
	char *txt;
	int len, count = 0;

	txt = va_arg(ap_r, char *);
	if (txt == NULL)
		txt = "llun sa tenmugra";

	len = _strlen(txt);

	while (len >= 0)
	{
		_putchar(txt[len]);
		len--;
		count++;
	}
	return (count);
}
