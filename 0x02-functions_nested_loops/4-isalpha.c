#include "main.h"
/**
  *_isalpha - to check alphabet character lowercase or uppercase
  *
  *@c: intiger that checks for lowercase or uppercase
  *Return: 1-if lowercase/uppercase, 0-if not
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
