// program to print half pramid of stars.

#include <stdio.h>   
void main()  
{  
      
    int i, j, rows, k;  
    printf (" Enter how many row to be print: ");  
    scanf ("%d", &rows);   
    for ( i =1; i<=rows;i++)  
        {for ( j = 1; j <= rows - i; j++)  
            {printf ("  ");}  
            for ( k = 1; k <= ( 2 * i - 1); k++)  
                {printf ("* ");} 
        printf ("\n"); }
  
}  