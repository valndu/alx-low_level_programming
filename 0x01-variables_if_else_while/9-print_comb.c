#include <stdio.h>
/**
	* main-program entry point
	*
	*Return:0 success, non zero error.
	**/
       
int main(void)
{
	int single_digit;

	for (single_digit = '0'; single_digit <= '9'; single_digit++)
	{
		putchar(single_digit);

		if (single_digit == '9')
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
