#include <stdio.h>
#include <math.h>

int main() {
  int x = 30;
  int y = 42;
  int z = 10000;
  printf("x is %d and y is %d\n", x, y);

  int temp = x;
  x = y;
  y = temp;

  printf("x is %d and y is %d\n", x, y);
}
