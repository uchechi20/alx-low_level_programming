#include <stdio.h>

/**
 * main - print alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{
char lc;

for (lc = 'a'; lc <= 'z'; lc++);
{
	putchar(lc);
}
putchar("\n");
return (0);
}
