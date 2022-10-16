#include <stdlib.h>
#include <stdio.h>

/**
 * main : Entry point
 *
 * Reture 0: (Always Success)
 *
 **/

int main (void)
{
        char alph;
	char ALPH;
         alph = 'a';
	 ALPH = 'A';
                   while (alph <= 'z')
                   {
			   putchar(alph);
                           alph ++;
		    }
		   while (ALPH <= 'Z')
		   {
			   putchar(ALPH);
			   ALPH ++;
		   
		   }	   
	          	  putchar('\n');
                  	  return(0);
}
