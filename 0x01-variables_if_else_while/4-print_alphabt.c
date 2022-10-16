#include <stdlib.h>
#include <stdio.h>
/**
 * main: Entry point
 *
 * Return 0: Always (Succes)
 *
 * */

int main (void)
{
        char alph;

	 for (alph = 'a'; alph <= 'z'; alph ++)
	 {
		 if(alph == 'q' || alph =='e')
			 continue;
		 putchar(alph);
	 
	 }


        putchar('\n');

            return(0);
}	
