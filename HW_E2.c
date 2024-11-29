#include <stdio.h>

#define SIZE 5

int main() {

  int massiv_f[SIZE] = {
    0
  };
  int i = 0, min=0;

  while (i < SIZE) {
    scanf("%d", & massiv_f[i]);
    i++;
  }

  min=massiv_f[0];

  for (i = 1; i < SIZE; i++)
    {
        if (massiv_f[i] < min) min = massiv_f[i];
    }

  printf("%d \n", min);

  return 0;
}