#include "main.h"
/**
  *print_alphabet_x10 - to print alphabet 10 time
  *
  *Return: Success
  */
void print_alphabet_x10(void)
{
	char prnt;
	char alph;

	prnt = 0;
	while (prnt < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		prnt++;
	}
}
