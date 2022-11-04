#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digits
 * @str: array str
 *
 * Return: Always 0 (success)
 */
int check_num(char *str)
{
/*Declaring variables*/
unsigned int count;

count = 0;
while (count < strlen(str)) /*count string*/

{
if (!isdigit(str[count])) /*check if str there are digits*/
{
return (0);
}

count++;
}
return (1);
}
