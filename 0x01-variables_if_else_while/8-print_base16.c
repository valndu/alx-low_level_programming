#include <stdlib.h>
#include <stdio.h>
/**
 * main: Entry point
 *
 * Return 0; Always (Success)
 *
 * */

int main(void)
{
	/*variable declaration*/
	int di_git;
	char alph;
	/*initializing the char variables*/

	di_git = '0';
	alph = 'a';
	       while(di_git <='9') 
       {
	       putchar (di_git);
	       di_git ++;
       }	       
       while(alph <= 'f')
       {
	       putchar (alph);
	       alph ++;
       }
       putchar('\n');
       return (0);

}
