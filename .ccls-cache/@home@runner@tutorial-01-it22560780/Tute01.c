/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main(void) {

  float mark1, mark2, avg;

  printf("enter subject 1 marks: ");
  scanf("%f", &mark1);
  printf("enter subject 2 marks: ");
  scanf("%f", &mark2);

  avg = (mark1 + mark2) / 2;

  printf("Average: %.2f", avg);

  return 0;
}
