#include "main.h"
/**
 * main - prints the string "_Putchar" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[7] = "_Putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
