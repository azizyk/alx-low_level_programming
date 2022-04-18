#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string.
 * @s: declaration of *s and paramters for the function
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, j;
	char r[1000];


	i = j = 0;
	while (s[i] != '\0')
	{
		r[i] = s[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		s[i] = r[j];
		i--;
		j++;
	}
	s[j++] = '\0';
}
