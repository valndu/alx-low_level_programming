#include <stdlib.h>
#include <stdio.h>
/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int di_git;
	char alph;
	di_git = '0';
	alph = 'a';

	while(di_git <='9')
	{
		putchar (di_git);
		di_git++;
	}	       
       while(alph <= 'f')
       {
	       putchar (alph);
	       alph ++;
       }
       putchar('\n');
       return (0);

}
