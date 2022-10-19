#include "main.h"
/**
  *print_alphabet - to print alphabets in lower case
  *
  *Return: 0 Always
  */
void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
