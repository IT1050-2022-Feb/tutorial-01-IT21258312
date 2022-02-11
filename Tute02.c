/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  int distance; //declaring variables for distance 
  double amount1,amount2;//declaring variables for amount 

  printf("Enter the distance travelled: "); // this is to input the distance
  scanf("%d", &distance); //this will read the distance

  if(distance<=30)
  {
    amount1= distance * 50.0; //calculation for first 30km
    printf("Amount is %.2f\n", amount1); //display the amount 
  }
  else
  {
    amount2= (30 * 50) + (distance - 30) * 40.0; //calculation for the remaining distance
    printf("Amount is %.2f\n", amount2);
  }
  
  return 0;
}
