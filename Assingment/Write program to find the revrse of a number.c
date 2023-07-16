#include <stdio.h>
//Program to find the revrse of a number

int main() {

  int x, reverse, rem;
  reverse=0;

  printf("Enter an integer number: ");
  scanf("%d", &x);

  while (x != 0)
  {
    rem = x % 10;
    reverse = reverse * 10 + rem;
    x /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}
