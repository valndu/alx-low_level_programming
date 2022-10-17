#include<stdlib.h>
#include<stdio.h>
/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int  s_digit;

	s_digit = '0';
	while (s_digit <= '9')
	{
		putchar(s_digit);
		s_digit++;
	}
		putchar('\n');
		return (0);
}
