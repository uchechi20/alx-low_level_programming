#include "main.h"

/**
 * cap_string - capitalizes words
 * @str: string
 * Return: pointers to string
 */
char *cap_string(char *str)
{
	int i = 0;
	while (str[i])
	{
		while (!(str[1] >= 'a' && str[1] <= 'z'
))
		if (str[i - 1] == ' ' ||
		    str[i - 1] == '\t' ||
		    str[i - 1] == '\n' ||
		    str[i - 1] == ',' ||
