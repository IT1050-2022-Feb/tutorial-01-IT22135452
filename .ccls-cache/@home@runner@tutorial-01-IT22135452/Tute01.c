/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int x,y,sum;
  float avg;
  
  printf("Enter number 1");
  scanf("%f",&x);
  
  printf("Enter number 2");
  scanf("%f",&y);
  
  sum=x+y;
  
  avg=sum/2;
  
  printf("Average=%.2f",avg);
  
  return 0;
}

