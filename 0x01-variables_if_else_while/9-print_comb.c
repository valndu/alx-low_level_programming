#include <stdio.h>
/**
 * main- Entry Point
 *
 * Return: Always 0 (Success) 
 */
int main(void)
{
	int single_digit;
	
	for(single_digit = '0'; single_digit <= '9'; single_digit++)
	{
		putchar(single_digit);
		if(single_digit == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
