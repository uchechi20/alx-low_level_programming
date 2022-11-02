#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: the number to find the factorial of
 *
 * Return: factorial
 */
int factorial(int n)
{
if (n == 0) /*Base condition*/

return (1);

else if (n < 0) /*Base condition*/
return (-1);
else
return (n * factorial(n - 1)); /*Recursive call*/

}
