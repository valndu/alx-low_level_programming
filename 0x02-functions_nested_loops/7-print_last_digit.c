#include "main.h"
/**
  *print_last_digit - print the last digit of a number
  *@L: the last digit of an integer
  *Return:return the last digit
  */
int print_last_digit(int L)
{
	int last_digit;

	last_digit = L % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
