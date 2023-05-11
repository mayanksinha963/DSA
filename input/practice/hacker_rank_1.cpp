#include <stdio.h>
int main() {
  int x[] = {22, 8, 87, 76, 45, 43, 34, 13, 51, 15};
  int length = sizeof(x)/sizeof(x[0]);
  printf("%d", length);
  int count = 0;
  while (x[count] != '\0') {
    count++;
  }
  printf("%d", count);
return 0;
}