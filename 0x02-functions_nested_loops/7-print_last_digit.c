#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */

int print_last_digit(int n)
{

n = n >= 0 ? n : n * -1;
int last = n % 10;
_putchar('0' + last);

return (last);

}
