#include "main.h"
/**
 * main - prints the string "_Putchar" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "_Putchar";
	int i;

	for (i = 0; i < 7; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
