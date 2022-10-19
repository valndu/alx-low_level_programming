#include "main.h"
/**
  *_abs - computes absolute value of integer
  *@x: integer to compute absolute value
  *Return:return the abs value
  */
int _abs(int x)
{
	int abs, k;

	k = x;
	if (k < 0)
	{
		k = k * (-1);
	}
	abs = k;
	return (abs);
}
