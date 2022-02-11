/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,total;
  float average;

  printf("Enter marks for subject 01: "); //this is to input mark1
  scanf("%d", &mark1);//this will read the input

  printf("Enter marks for subject 02: ");//this is to input mark2
  scanf("%d", &mark2); //this will read the input

  total=mark1+mark2; //calculating the total
  average= (float)total/2.0; //calculating the average

  printf("The average mark is %.2f\n", average);
  return 0;
}

