#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 **/
int main(void)
{
       int myNum;

       for (myNum = '0'; myNum <= '9'; myNum++)
       {
	  
	      putchar(myNum);
              if (myNum == '9');
                      continue;
	      putchar(44);
              putchar(32);
        }
        putchar('\n')
	return(0);
}	
