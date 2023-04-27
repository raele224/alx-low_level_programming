#include "main.h"
/**
  * main - Entry point
  * Discription: 'check for the intiger if it is positive or negative'
  * Return:Always 0 
  */

void positive_or_negative(int i)

{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{       	
		printf("%d is zero\n", i);
	}
}	
