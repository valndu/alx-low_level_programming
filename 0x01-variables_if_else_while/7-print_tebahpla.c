#include<stdlib.h>
#include<stdio.h>

/**
 * main: Entry point
 *
 * Return 0 : Always (Success)
 *
 * */

int main(void)
{
	char re_verse;
	re_verse = 'z';
	while (re_verse >= 'a')
	{
		putchar(re_verse);
		re_verse --;

	}
	putchar('\n');
	return (0);



}
