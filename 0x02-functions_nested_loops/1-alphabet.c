#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	int ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		print_alphabet(ch);
	}
	return (0);
}
