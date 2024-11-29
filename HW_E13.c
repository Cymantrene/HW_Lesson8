#include <stdio.h>

#define SIZE 10

void FindNumZero (int arr[], int n)
{
  for (int i = 0; i < n; i++)
    {
      int num = arr[i] / 10 % 10;
      if (num == 0)
        {
          printf ("%d ", arr[i]);
        }
    }
}

int main ()
{

  int arr[SIZE] = { 0 };

  for (int i = 0; i < SIZE; i++)
    scanf ("%d", &arr[i]);

  FindNumZero (arr, SIZE);

  return 0;
}
