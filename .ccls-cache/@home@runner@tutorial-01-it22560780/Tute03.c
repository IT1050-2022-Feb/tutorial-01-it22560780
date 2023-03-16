/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 10
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int number, i = 1, value = 0;

  printf("enter a number: ");
  scanf("%d", &number);

  while (i != number + 1) {
    value = value + i;
    i++;
  }

  printf("1 to %d total is: %d", number, value);

  return 0;
}
