#include <stdlib.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Succesful)
 */
int main(void)
{
	int num;
	int s_digit;

	s_digit = 0;
	num = 9;
	while (s_digit <= num)
	{
		printf("%d", s_digit);
		s_digit++;
	}
	printf("\n");
	return (0);
}
