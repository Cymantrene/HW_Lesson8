#include <stdio.h>

#define SIZE 5

int main() {

  float massiv_f[SIZE] = {
    0.000
  };
  int average = 0;

  while (average < SIZE) {
    scanf("%f", & massiv_f[average]);
    average++;
  }

  average = (float) 0;

  for (int i = 0; i < SIZE; i++) {
    average += massiv_f[i];
  }

  printf("%.3f \n", average / (float) SIZE);

  return 0;
}