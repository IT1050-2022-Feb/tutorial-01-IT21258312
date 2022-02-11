/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
#include <math.h>
int main() {
  
  int n,i,sum=0;
  
  printf("Enter the number: "); //this is to input the number 
  scanf("%d", &n);//this will read the input
  
   for(i=0; i<=n; i++)
   {
     sum = sum + i; //this will calculate the sum 
   }

   printf("Sum is %d\n", sum); //this will display the sum

  
  return 0;
}

