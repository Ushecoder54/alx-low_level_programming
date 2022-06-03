#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints "is positive" if randomly generated number is greater
 * than zero or "is less" if it is equal to zero or "is negative" if it is
 * less than zero
 *
 * Return: Always 0 (Successful)
 */
int main(void)

{


      int n;

      srand(time(0));
      n = rand() - RAND_MAX /2;
      if (n > 0)
	      printf("%d is positive\n", n);
     else if (n==0)
              printf("%d is zero\n", n);
     else if (n < 0)
	      printf("%d is negative\n", n);
     return(0);

}     
